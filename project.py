import asyncio
import json
import random
import time
from datetime import datetime, timedelta
from twikit import Client

AUTH_TOKEN = "9bafb8ca6d0b6c83278b481e8ebd2750136843bf"
CT0 = "57363f2d12687c0b6cc319ae2cf91fbd5314b8b3ed072badb93c2fe604c9ee88818f3c12824b52b0f91aeae98567eeb1b3bf36ac46f1193b8463ed67e1f5cb0f9d94af49353119538b3cac6b8d4a4f39"

KEYWORD = "fintech OR FinTech OR FINTECH"
START_DATE = "2020-01-01"
END_DATE = "2026-01-01"

DAYS_PER_BATCH = 7
TWEETS_PER_BATCH = 100

OUTPUT_FILE = "fintech_tweets_2020_2026.jsonl"

BASE_SLEEP = (8, 15)
ERROR_SLEEP = (60, 120)


async def scrape():
    twitter = Client("en-US")
    twitter.set_cookies({
        "auth_token": AUTH_TOKEN,
        "ct0": CT0
    })
    print("✅ Logged in")

    start = datetime.strptime(START_DATE, "%Y-%m-%d")
    end = datetime.strptime(END_DATE, "%Y-%m-%d")
    current = start

    while current < end:
        next_date = current + timedelta(days=DAYS_PER_BATCH)

        since = current.strftime("%Y-%m-%d")
        until = next_date.strftime("%Y-%m-%d")

        query = (
            f"{KEYWORD} "
            f"-filter:replies "
            f"since:{since} until:{until} "
            f"lang:en"
        )

        print(f"🔍 {since} → {until}")

        try:
            tweets = await twitter.search_tweet(
                query,
                product="Top", 
                count=TWEETS_PER_BATCH
            )

            if not tweets:
                print("⚠️ No tweets (skipping)")
                current = next_date
                time.sleep(random.randint(*BASE_SLEEP))
                continue

            saved = 0
            with open(OUTPUT_FILE, "a", encoding="utf-8") as f:
                for t in tweets:
                    try:
                        if not t.user:
                            continue

                        created_at = datetime.strptime(
                            t.created_at,
                            "%a %b %d %H:%M:%S %z %Y"
                        ).isoformat()

                        record = {
                            "tweet_id": str(t.id),
                            "username": t.user.screen_name,
                            "text": t.text,
                            "created_at": created_at,
                            "likes": t.favorite_count,
                            "followers": t.user.followers_count
                        }

                        f.write(json.dumps(record, ensure_ascii=False) + "\n")
                        saved += 1

                    except Exception:
                        continue

            print(f"💾 Saved {saved} tweets")
            time.sleep(random.randint(*BASE_SLEEP))

        except Exception as e:
            print("🚨 Twitter error (skipping batch):", e)
            time.sleep(random.randint(*ERROR_SLEEP))

        current = next_date


if __name__ == "__main__":
    asyncio.run(scrape())
