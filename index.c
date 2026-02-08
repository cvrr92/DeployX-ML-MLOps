// #include<stdio.h>

// int main()
// {
//     float a, b, c, d;

//     printf("Enter Your First Number: ");
//     scanf("%f", &a);

//     printf("Enter Your Second Number: ");
//     scanf("%f", &b);

//     printf("Enter Your Third Number: ");
//     scanf("%f", &c);

//  d = (a + b + c)/3;

//  printf("Average of %.2f, %.2f, and %.2f is: %.2f", a, b, c, d);
// }

// #include<stdio.h>

// int main(){
//     float p, r, t;
//     float i;

//     printf("Enter Principle: ");
//     scanf("%f", &p);

//     printf("Enter Rate: ");
//     scanf("%f", &r);

//     printf("Enter Time: ");
//     scanf("%f", &t);

//     i = (p*r*t)/100;

//     printf("Your Simple Interest is: %.2f", i);

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a = 4, b = 6;

//     printf("%d\n", a+b);
//     printf("%d\n", a-b);
//     printf("%d\n", a/b);
//     printf("%d\n", a%b);
//     printf("%d\n", a*b);

//     if (a<b)
//     {
//         printf("b is greater than a\n");
//     }

//     else{
//         printf("a is greater than b\n");
//     }

//     // printf("here: %d\n",a+=2);
//     printf("here2: %d\n",a-=2);
//      return 0;
// }

// #include<stdio.h>
// int main(){

//     int a=8, b=5;
//     if (a<b)
//     {
//         printf("b is greater than a\n");
//     }

//     else{
//         printf("a is greater than b\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a;

// printf("Enter Number: ");
// scanf("%d", &a);

// if (a%2==0)
// {
//     printf("Given Number is Even");
// }

// else{
//     printf("Given Number is Odd");
// }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a, b, c, d;

//     printf("Enter First Number: ");
//     scanf("%d", &a);

//     printf("Enter Second Number: ");
//     scanf("%d", &b);

//     printf("Enter Third Number: ");
//     scanf("%d", &c);

//     printf("Enter Fourth Number: ");
//     scanf("%d", &d);

//     if (a>b && a>c && a>d)
//     {
//        printf("%d is Greatest", a);
//     }

//     else if (b>a && b>c && b>d)
//     {
//         printf("%d is Greatest", b);
//     }

//     else if(c>a && c>b && c>d){
//         printf("%d is greatest", c);
//     }

//     else if (d>a && d>b && d>c)
//     {
//         printf("%d is greatest", d);
//     }

//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int i = 1;
//     while (i<11)
//     {
//         printf("%d. Happy Birthday!\n", i);
//         i = i + 1;
//     }

//     // i++;

//     return 0;
// }

// QUICK QUIZ

// #include<stdio.h>

// int main(){
//     int i = 0;
//     while (i<=20){
//         if (i>=10)
//         {
//            printf("The Value of i is %d\n", i);
//         }
//         i++;
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a, b, c;
//     a = 5;
//     b = 10;
//     c = a;
//     a = b;
//     b = c;

//     printf("%d,%d", a, b);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     double bill, discount=0.0, final_amount;
//     printf("Enter total bill amount: ");
//     if(scanf("%lf", &bill) != 1) return 1;
//     if(bill >= 1000.0){
//         discount = 0.20;
//     } else if(bill >= 500.0 && bill <= 1000.0){
//         discount = 0.10;
//     } else{
//         discount = 0.0;
//     }

//     final_amount = (bill*(1.0 - discount));
//     printf("Original bill: %.2f\n", bill);
//     printf("Discount: %.0f%%\n", discount * 100.0);
//     printf("Final amount after discount: %0.2f\n", final_amount);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, year;
//     printf("Enter Year: ");
//     scanf("%d", &n);

//     for (year = 1; year <=4*n; year++)
//     {
//         if ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
//         {
//             printf("%d ", year);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter Number: ");
//     scanf("%d", &N);

//     for (int year = 1; year <= N; year++) {
//         if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
//             printf("%d\n", year);
//         }
//     }

//     return 0;
// }

#include<stdio.h>

int main(){
    int n, fact=1;
scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        fact *=i;
    }

    printf("%d", fact);
    return 0;
}