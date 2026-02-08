// #include<stdio.h>

// int main(){
//     int n, i;
//     printf("Enter any Number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++)
//     {
//         if(i%2==0){
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a=4, b=5;
//     a = a+b;
//     b = a-b;
//     a = a-b;

//     printf("a: %d \n b: %d", a,b);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, i, isPrime = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n <= 1) {
//         printf("Not Prime\n");
//         return 0;
//     }

//     for (i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             isPrime = 0;
//             break;
//         }
//     }

//     if (isPrime)
//         printf("Prime\n");
//     else
//         printf("Not Prime\n");

//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n, i, isprime=1;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     if(n<=1){
//         printf("Not Prime.");
//     }

//     for(i=2; i<n; i++){
//         if(n%i==0){
//             isprime = 0;
//             break;
//         }
//     }

//     if(isprime==1){
//         printf("Prime");
//     }
//     else{
//         printf("Not Prime.");
//     }
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n, i, j;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 0; j < i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, i, j;
//     printf("Enter any Number: ");
//     scanf("%d", &n);
//     for(i=n; i>=1; i--){
//         for(j=1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, i;
//     int a = 0, b = 1, next;

//     // Input number of terms
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");

//     for (i = 1; i <= n; i++) {
//         printf("%d ", a);
//         next = a + b;
//         a = b;
//         b = next;
//     }

//     printf("\n");
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n, a=0, b=1, next, i;
//     printf("Enter number of Terms: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         printf("%d ", a);
//         next = a+b;
//         a=b;
//         b=next;
//     }

//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, i, isprime=1;
//     printf("Number: ");
//     scanf("%d", &n);
//     if(n<=1){
//         printf("Not Prime");
//     }

//     for(i=2; i<n; i++){
//         if(n%i==0){
//             isprime=0;
//             break;
//         }
//     }

//     if(isprime==1){
//         printf("Prime");
//     }
//     else{
//         printf("Not prime");
//     }
//     return 0;
// }




// #include<stdio.h>

// int main(){
//     int n, sum = 0;
//     printf("Enter Range: ");
//     scanf("%d", &n);
//     for(int i = 0; i<=n; i++){
//         sum = sum + i;
//     }

//     printf("Sum till the given number is: %d", sum);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n1, n2, i, sum = 0;
//     printf("Enter Range: ");
//     scanf("%d %d", &n1, &n2);

//     for(i=n1; i<=n2; i++){
//         sum = sum + i;
//     }

//     printf("Sum of Given range is: %d", sum);

//     return 0;
// }
// write a program to find to number of digit in number

// #include<stdio.h>

// int main(){
//     int n, num = 0;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     while(n>0){
//          int b = n/10;
//          num++;
//     }

//     printf("%d", num);
//     return 0;
// }

//Write a program to Sum the Given digit

// #include<stdio.h>

// int main(){
//     int n, i;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     while(n>0){
//         // int rem = n%10;
//         int n = n/10;
//         i+=1;
//     }

// printf("Total Numbers are: %d", i);
//     return 0;
// }

#include<stdio.h>

int main(){
    int n, fact = 1;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fact*=i;
    }

    printf("Factorial is: %d", fact);

    return 0;
}