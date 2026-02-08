// #include<stdio.h>

// int main(){
//     int n,reverse=0, remainder;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     while(n!=0){
//         remainder = n%10;
//         reverse = reverse*10 + remainder;
//         n = n/10;
//     }
//     printf("Reverse is: %d", reverse);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n,remainder,reverse=0;
//     scanf("%d", &n);
//     int original = n;
//     while(n!=0){
//         remainder = n%10;
//         reverse = reverse*10 + remainder;
//         n = n/10;
//     }

//     if(original!=reverse){
//         printf("Not Palindrome.");
//     }
//     else{
//     printf("Palindrome.");
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int n, i, j, isprime;
//     printf("Enter N: ");
//     scanf("%d", &n);
//     for (i = 2; i <= n; i++)
//     {
//         isprime = 1;
//         for (j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 isprime = 0;
//             }

//             break;
//         }
//         if (isprime == 1)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter number N: ");
//     scanf("%d", &n);
//     for (int i = 1; i<=n; i++)
//     {
//         if(i%2!=0){
//             printf("%d ", i);
//         }
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, i, prime=0;
//     printf("Enter a Number: ");
//     scanf("%d", &n);

//     if(n<=1){
//         printf("Not Prime");
//     }

//     for(i=2; i<n; i++){
//         if(n%i==0){
// prime = 1;
//         }
//     }

//     if (prime==0)
//     {
//         printf("Prime");
//     }
//     else{
//         printf("Not Prime");
//     }
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n,reverse=0,remainder;
//     printf("Enter any Number: ");
//     scanf("%d", &n);
//     int og = n;
//     while(n!=0){
//             remainder=n%10;
//             reverse = reverse*10+remainder;
//             n = n/10;
//     }
//     if(reverse==og){
//         printf("Pallindrom");
//     }
//     else{
//         printf("Not Pallindrom");
//     }


//     return 0;
// }

// #include<stdio.h>

// int main(){

//     char alp;
//     printf("Enter any Alphabate: ");
//     scanf("%c", &alp);
//     if(alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' || alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U'){
//         printf("Vowel");
//     }
//     else{
//         printf("Consonant");
//     }
  
//     return 0;
// 
// }


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter any Number: ");
//     scanf("%d", &n);

//     if (n<0)
//     {
//         printf("%d is absolute value.", n*(-1));
//     }
//     else{
//         printf("%d is absolute value.", n);
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n, k=0;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         k = k+i;
//     }

//     printf("%d", k);
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int unit;
//     printf("Enter Total Unit: ");
//     scanf("%d", &unit);
//     if (unit <= 100)
//     {
//         printf("Total Electricity bill: %d", unit*5);
//     }
//     else if(unit>=100 && unit<=200){
//         printf("Total Electricity Bill: %d", (unit-100)*7+500);
//     }

//     else{
//         printf("Total Electricity Bill: %d", (unit-200)*10+1200);
//     }
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     long long fact=1;
//     printf("Enter any number: ");
//     scanf("%d", &n);

//     if (n<0)
//     {
//         printf("Factorial not defined for %d", n);
//     }

//     else if(n == 0){
//         printf("Factorial of 0 is 1");
//     }
    
// else{
//     for(int i=1; i<=n; i++)
//     {
//         fact = fact*i;
//     }
//     printf("Factorial of %d is: %lld", n, fact);
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter any Number: ");
//     scanf("%d", &n);
//     for (int i = 1; i<=10; i++)
//     {
//         printf("%d\n",n*i);
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//   printf("Enter any Number: ");
//   scanf("%d", &n);
//   for(int i=n; i>=1; i--){
//     printf("%d ", i);
//   }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter any number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         if (i%2!=0)
//         {
//            printf("%d\n", i);
//         }
        
//     }
//     return 0;
// }


//<----------Fibonacci Series ----------------------->
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter how many Fibonacci numbers you want: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for (i = 2; i < n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}
