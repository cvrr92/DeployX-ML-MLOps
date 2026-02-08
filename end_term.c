// Adding Value of a Position in Array

// #include<stdio.h>
// int main(){
//     int n, pos, value, i;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);

//     int arr[n];

//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the Position: ");
//     scanf("%d", &pos);

//     printf("Enter the value: ");
//     scanf("%d", &value);

//     for(i=n; i>=pos; i--){
//         arr[i] = arr[i-1];
//     }

//     arr[pos-1] = value;

//     printf("Final Array: ");
//     for(i=0; i<=n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// Least of two Values

// #include<stdio.h>

// int main(){
//     int arr[2], least = 1;

//     printf("Enter array: ");

//     for(int i=0; i<2; i++){
//         scanf("%d", &arr[i]);
//     }

//     for(int i=2; i<arr[1]; i++){
//         if(arr[0]%i==0 && arr[1]%i==0){
//             least = i;
//             break;
//         }
//         least = 1;
//     }

//     printf("Least of Both value is: %d", least);
//     return 0;
// }

// < ------------------- STRING ------------------------->

// REVERSING STRING

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[] = "Hello World";
//     int len = strlen(str);

//     for(int i=len-1; i>=0; i--){
//         printf("%c", str[i]);
//     }
//     return 0;
// }

// ALL CHARACTERS IN CAPITAL IN STRING

// #include <stdio.h>

// int main() {
//     char str[100];

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     for (int i = 0; str[i] != '\0'; i++) {
//         // if character is lowercase a–z, convert to uppercase A–Z
//         if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - ('a' - 'A');
//         }
//     }

//     printf("Uppercase string: %s", str);

//     return 0;
// }

// ALL CHARACTER IN LOWER CASE IN STRING

// #include<stdio.h>

// int main(){
//     char str[100];
//     fgets(str, sizeof(str), stdin);

//     for(int i=0; str[i] != '\0'; i++){
//         if (str[i] >= 'A' && str[i] <= 'Z'){
//             str[i] = str[i] + ('a' - 'A');
//         }
//     }
//     printf("Lower Case: %s", str);
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     char str[100];
//     int count = 0;
//     fgets(str, sizeof(str), stdin);

//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if(str[i] == '\n'){
//             str[i] = '\0';
//             break;
//         }
//     }

//     for(int i=0; str[i] != '\0'; i++){
//         count++;
//     }

//     for(int i=count-1; i>=0; i--){
//         printf("%c", str[i]);
//     }
//     printf("\n");
//     printf("Size: %d", count);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     fgets(str, sizeof(str), stdin);

//     for(int i=0; str[i] != '\0'; i++){
//         if (str[i] == '\n')
//         {
//             str[i] = '\0';
//             break;
//         }
//     }

//     int len = strlen(str);

//     printf("%d", len);
//     return 0;
// }

// Remove Space

// #include<stdio.h>

// int main(){
//     char str[100];
//     fgets(str, sizeof(str), stdin);
//     for(int i=0; str[i] != '\0'; i++){
//         if (str[i] == '\n')
//         {
//             str[i] = '\0';
//             break;
//         }
//     }

//     for(int i=0; str[i] != '\0'; i++){
//         if(str[i] == ' '){
//             continue;
//         }
//         printf("%c", str[i]);
//     }

//     return 0;
// }

// ADDING 2-D ARRAY

// #include<stdio.h>

// int main(){
//     int r, c;
//     printf("Enter number of rows: ");
//     scanf("%d", &r);

//     printf("Enter number of columns: ");
//     scanf("%d", &c);

//     int a[r][c];
//     int b[r][c];
//     int sum[r][c];

//     printf("Enter First Matrix: \n");

//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter Second Array: \n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d", &b[i][j]);
//         }
//     }

//     printf("Sum Array: \n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//            sum[i][j] = a[i][j] + b[i][j];
//            printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// BUBBLE SORT
// #include<stdio.h>

// int main(){
//     int n, temp;
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter Array: ");
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if (arr[j]>arr[j+1])
//             {
//                 temp = arr[j+1];
//                 arr[j+1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     printf("Sorted Array: ");
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// INSERTION IN ARRAY

// #include<stdio.h>

// int main(){
//     int n, value, pos;
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int arr[n];

//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter Position: ");
//     scanf("%d", &pos);

//     printf("Enter the value: ");
//     scanf("%d", &value);

//     for(int i=n; i>=pos; i--){
//         arr[i] = arr[i-1];
//     }

//     arr[pos-1] = value;

//     printf("Final Array: ");
//     for(int i=0; i<=n; i++){
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


// ARMSTRONG NUMBER

// #include<stdio.h>

// int main(){
//     int n, temp, power=1, count = 0, result=0, num;

//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     temp = n;
//     while(temp!=0){
//         temp /= 10;
//         count++;
//     }

//     temp = n;
//     for(int i=1; i<=count; i++){
//         num = temp%10;
//         power = 1;
//         for(int i=1; i<=count; i++){
//             power *= num;
//         }
//         temp /= 10;
//         result += power;
//     }

//     if(result == n){
//         printf("Armstrong");
//     }

//     else{
//         printf("Not Armstrong");
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int num, count = 1;

//     printf("Enter a Number: ");
//     scanf("%d", &num);

//     if(num<=2){
//         count;
//     }
//     else{
//    for(int i=3; i<=num; i++){
//     for(int j=2; j<i; j++){
//         if(i%j != 0){
//            count += 1;
//         }
//     }
//    }
// }
//    printf("%d", count);
//     return 0;
// }


// PALINDROME IN STRING

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     fgets(str, sizeof(str), stdin);

//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }
//     }

//     int start = 0;
//     int end = strlen(str) - 1;
//     int is_palindrome = 1;

//     while (start < end) {
//         if (str[start] != str[end]) {
//             is_palindrome = 0;
//             break;
//         }
//         start++;
//         end--;
//     }

//     if (is_palindrome)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");

//     return 0;
// }


// #include<stdio.h>

// int main(){
//     char str[100];
//     int count = 0;
//     scanf("%s", str);

//     for(int i=0; str[i] != '\0'; i++){
//         int found = 0;
//         for(int j=0; j<i; j++){
//             if(str[i] == str[j]){
//                 found =1;
//                 break;
//             }
//         }
//         if(!found){
//             count++;
//         }
//     }

//     printf("%d", count);

//     return 0;
// }


// #include<stdio.h>

// int main(){
//    char str[100];
//    int count=0;
//    fgets(str, sizeof(str), stdin);

//    for(int i=0; str[i] != '\0'; i++){
//     if(str[i] == '\n'){
//         str[i] = '\0';
//         break;
//     }
//    }

//   for(int i=0; str[i] != '\0'; i++){
//     count++;
//   }
//    printf("%d", count);

// printf("Reverse: ");
//    for(int i=count-1; i>=0; i--){
//     printf("%c", str[i]);
//    }
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     int count = 0;
//     fgets(str, sizeof(str), stdin);

//     int len = strlen(str);
//     for(int i=0; str[i] != '\0'; i++){
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
//             count++;
//         }
//     }

//     printf("Consonents: %d", (len-1)-count);
//     printf("Vowels: %d", count;
//     return 0;
// }


// REMOVING ELEMENT FROM A POSITION

// #include<stdio.h>

// int main(){
//     int n, pos;
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter an Array: ");
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter position to remove: ");
//     scanf("%d", &pos);

//     for(int i=pos-1; i<n; i++){
//         arr[i] = arr[i+1];
//     }

//     n--;

//     printf("Final Array: ");
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, isPrime=0;

//     printf("Enter a Number: ");
//     scanf("%d", &n);

//     if(n == 1){
//         isPrime = 0;
//     }
//     else if(n == 2){
//         isPrime = 1;
//     }

//     else{
//         for(int i=2; i<n; i++){
//             if(n%i==0){
//                 isPrime = 0;
//                 break;
//             }
//             isPrime = 1;
//         }
//     }

//     if(isPrime){
//         printf("Prime");
//     }
//     else{
//         printf("Not prime");
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, a=0, b=1, next;
    
//     printf("Enter a Number: ");
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         printf("%d ", a);
//         next = a+b;
//         b=a;
//         a=next;
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, rev = 0, rem, org;

//     printf("Enter a Number: ");
//     scanf("%d", &n);

//     org = n;
//     while (n!=0)
//     {
//         rem = n%10;
//         rev = rev*10+rem;
//         n /= 10;
//     }

//     if(rev == org){
//         printf("Palindrom");
//     }
//     else{
//         printf("Not Palindrom");
//     }
    
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     printf("Enter a String: ");
//     scanf("%s", str);
//     char rev[100];

//     int len = strlen(str);

//     for(int i=0; i<len; i++){
//         rev[i] = str[len-i-1];
//     }

//     rev[len] = '\0';

//     if(strcmp(rev, str) == 0){
//         printf("Palindrom");
//     }

//     else{
//         printf("Not Palindrom");
//     }
//     printf("%s", rev);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, min, max;
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int arr[n];

//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     min = max = arr[0];

//     for(int i=0; i<n; i++){
//         if(max<arr[i]){
//             max =arr[i];
//         }
//         if(min>arr[i]){
//             min = arr[i];
//         }
//     }

//     printf("Maximum: %d\n", max);
//     printf("Minimum: %d", min);
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, pos, value;
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int arr[n+1];

//     printf("Enter Array: ");
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter Position: ");
//     scanf("%d", &pos);

//     printf("Enter Value: ");
//     scanf("%d", &value);

//     for(int i=n; i>=pos; i--){
//         arr[i] = arr[i-1];
//     }

//     arr[pos-1] = value;

//     printf("Final Array: ");
//     for(int i=0; i<=n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


#include<stdio.h>

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Reverse Array: ");
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}