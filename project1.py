import asyncio
import time
from datetime import datetime, timedelta
from supabase import create_client
from twikit import Client

# --- SETTINGS ---
url = "me nahi bataunga"
key = "me nahi bataunga"
token = "nahi bataunga nahi batanuga" 
ct0 = "bilkul nhi bataunga"

start_date_str = "2020-01-01"
end_date_str = "2026-01-01"
min_likes = 5
min_followers = 500
days_per_batch = 7
tweets_to_get = 70

async def scrape():
    db = create_client(url, key)
    twitter = Client('en-US')
    
    try:
        cookies = {'9bafb8ca6d0b6c83278b481e8ebd2750136843bf': token, '57363f2d12687c0b6cc319ae2cf91fbd5314b8b3ed072badb93c2fe604c9ee88818f3c12824b52b0f91aeae98567eeb1b3bf36ac46f1193b8463ed67e1f5cb0f9d94af49353119538b3cac6b8d4a4f39': ct0}
        twitter.set_cookies(cookies)
        print("Logged in")
    except:
        print("Could not log in")
        return

    date1 = datetime.strptime(start_date_str, "%Y-%m-%d")
    date2 = datetime.strptime(end_date_str, "%Y-%m-%d")
    
    current_date = date1

    while current_date < date2:
        next_date = current_date + timedelta(days=days_per_batch)
        
        d1_string = current_date.strftime("%Y-%m-%d")
        d2_string = next_date.strftime("%Y-%m-%d")
        
        search_text = f'Fintech min_faves:{min_likes} -filter:replies since:{d1_string} until:{d2_string} lang:en'
        print("Getting tweets for " + d1_string)
        
        try:
            tweets = await twitter.search_tweet(search_text, product='Top', count=tweets_to_get)
            
            items = []
            if tweets:
                for t in tweets:
                    if len(items) >= tweets_to_get:
                        break

                    try:
                        followers = t.user.followers_count
                        if followers < min_followers:
                            continue

                        raw_date = t.created_at
                        final_date = d1_string
                        final_time = "00:00:00"

                        try:
                            dt = datetime.strptime(raw_date, '%a %b %d %H:%M:%S %z %Y')
                            final_date = dt.strftime("%Y-%m-%d")
                            final_time = dt.strftime("%H:%M:%S")
                        except:
                            pass

                        new_record = {
                            "tweet_id": str(t.id),
                            "username": t.user.screen_name,
                            "content": t.text,
                            "posted_date": final_date,
                            "posted_time": final_time
                        }
                        items.append(new_record)
                        print(t.user.screen_name)
                    except:
                        pass
            
            if len(items) > 0:
                try:
                    db.table("tweets").upsert(items, on_conflict="tweet_id").execute()
                    print("Saved data")
                except:
                    print("Database error")

        except:
            print("Twitter error")
            time.sleep(60)

        current_date = next_date
        time.sleep(3)

if __name__ == "__main__":
    asyncio.run(scrape())