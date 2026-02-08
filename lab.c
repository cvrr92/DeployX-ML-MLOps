// #include<stdio.h>

// int main(){
//     int n, sum = 0;
//     printf("Enter a Number: ");
//     scanf("%d", &n);

//     while(n>0){
//         int a = n%10;
//         sum+=a;
//         n = n/10;
//     }

//     printf("Sum is: %d", sum);
//     return 0;
// }


// Using For Loop for same Problem

// #include<stdio.h>

// int main(){
//     int n, i, sum = 0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(i = n; n>0; n/=10){
//     int rem = n%10;
//     sum += rem;
//     }
//     printf("%d", sum);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int n, i;
//     int a = 0, b = 1, next;

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
//     int n, i, j;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n, i, j;
//     printf("Enter a Number: ");
//     scanf("%d", &n);

//     for(i = 1; i<=n; i++){
//         for(j=1; j<=i; j++){
//             printf("*");
//         }
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

// #include<stdio.h>

// int main(){
//     printf("    *\n");
//     printf("   **\n");
//     printf("  ***\n");
//     printf(" ****\n");
//     printf("*****\n");
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, i, j;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for(i=0; i<=5; i++){
//         for(j=5; j>i; j--){
//             printf("%d", n);
//         }
//         n--;
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, i, j;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     for(i=)
//     return 0;
// }

// #include <stdio.h>
// int main() {

//  int n, sum = 0;
//  printf("Enter a Number: ");
//     scanf("%d", &n);
//     for(int i=1; i<n; i++){
//         if(n%i==0){
//             sum += i;
//         }
//     }
//     if(n==sum){
//         printf("Perfect.");
//     }
//     else{
//         printf("Not Perfect.");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {

//    int n;
//    printf("Enter a Number: ");
//     scanf("%d", &n);
//     while(n!=0){
//         n/2==0;
//         break;
//     }
//     if(n==0){
//         printf("%d", 1);
//     }
//     else{
// printf("%d", 0);
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int num, temp, remainder, power, result=0, count = 0, org;

//     printf("Enter a Number: ");
//     scanf("%d", &num);
//     org = num;
//     temp = num;
//     while(temp!=0){
//         temp = temp/10;
//         count++;
//     }

//     temp = num;
//     while(temp!=0){
//         remainder = temp%10;
//         power = 1;
//         for(int i=1; i<=count; i++){
//             power *= remainder;
//         }

//         result += power;
//         temp = temp/10;
//     }
//     if(num==result){
//         printf("Given Number is Armstrong.");
//     }
//     else{
//         printf("Given Number is not Armstrong");
//     }
//     return 0;
// }


