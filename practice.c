// Checking Maximim and minimum element in an Array

// #include<stdio.h>

// int main(){
//     int n, min, max;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     int arr[n];

//     for(int i=0; i<n; i++){
//         printf("Enter %d element: ", i+1);
//         scanf("%d", &arr[i]);
//     }    
//     min=max=arr[0];
//     for(int i=0; i<n; i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//         if(min>arr[i]){
//             min = arr[i];
//         }
//     }

//     printf("Maximum: %d\n", max);
//     printf("Minimum: %d", min);
//     return 0;
// }

// Inseting Value on a Position

// #include<stdio.h>

// int main(){
//     int n, pos, value;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n+1];
//     for(int i=0; i<n; i++){
//         printf("Enter %d element: ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the position(1 to %d)", n+1);
//     scanf("%d", &pos);
//     printf("Enter the value: ");
//     scanf("%d", &value);

//     for(int i=n; i>=pos; i--){
//         arr[i] = arr[i-1];
//     }

//     arr[pos-1] = value;
//     n++;
//     printf("Array after insertion: ");
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


// Adding two 2-D Arrays
// #include<stdio.h>

// int main(){
//     int r, c, i, j;
//     printf("Enter number of rows: ");
//     scanf("%d", &r);

//     printf("Enter number of Columns: ");
//     scanf("%d", &c);

//     int a[r][c], b[r][c], sum[r][c];

//     printf("Enter First Matrix: \n");
//     for(i=0; i<r; i++){
//         for(j=0; j<c; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter Second Matrix: \n");
//     for(i=0; i<r; i++){
//         for(j=0; j<c; j++){
//             scanf("%d", &b[i][j]);
//         }
//     }

//     for(i=0; i<r; i++){
//         for(j=0; j<c; j++){
//             sum[i][j] = a[i][j]*b[i][j];
//         }
//     }

//     printf("Resultant Matrix: \n");
//     for(i=0; i<r; i++){
//         for(j=0; j<c; j++){
//            printf("%d ",  sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Bubble Sort

// #include<stdio.h>

// int main(){
//     int n, temp, i, j;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];

//     printf("Enter Elements: ");
//     for(i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     for(i=0; i<n-1; i++){
//         for(j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     printf("Sorted Array: ");
//     for(i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }


// Armstrong Number

// #include<stdio.h>

// int main(){
//     int n, power = 1, result, i, temp, count = 0, rem; 
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     temp = n;
//     while(temp!=0){
//         temp/=10;
//         count++;
//     }
//     temp = n;
//     for(i=1; i<=count; i++){
//         rem = temp%10;
//         power = 1;
//         for(int j=1; j<=count; j++){
//             power *= rem;
//         }
//         result += power;
//         temp /=10;
//     }

//     if(result == n){
//         printf("Armstrong");
//     }
//     else{
//         printf("Not Armstrong");
//     }

//     return 0;
// }


// Fibonacci Series

// #include<stdio.h>

// int main(){
//     int n, a=0, b=1, next, i;
//     printf("Enter a Number: ");
//     scanf("%d", &n);

//     printf(" %d,", a);
//     printf(" %d,", b);
//     next = a+b;
//     for (i = 1; next <= n; i++)
//     {
//         printf(" %d,", next);
//         a = b;
//         b = next;
//         next = a+b;
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int r, c;
//     printf("Enter number of row: ");
//     scanf("%d", &r);

//     printf("Enter number of column: ");
//     scanf("%d", &c);

//     int a[r][c], b[r][c], sum[r][c];

//     printf("Enter 1st Matrix: \n");

//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter 2st Matrix: \n");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             sum[i][j] = a[i][j]+b[i][j];
//         }
//     }

//     printf("Final Array: \n");
//      for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int count = 0;
//     char str[] = "Hello";
//     for(int i=0; str[i] == '\0'; i++){
//         count++;

//     }
//     return 0;
// }


// Transpose Matrix

// #include<stdio.h>

// int main(){
//     int r, c;
//     printf("Enter number of row: ");
//     scanf("%d", &r);
    
//     printf("Enter number of column: ");
//     scanf("%d", &c);

//     int arr[r][c];
//     int brr[c][r];

//     printf("Enter your Matrix: \n");

//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){

//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             brr[j][i] = arr[i][j];
//         }
//     }

//     printf("Final Matrix: \n");
//     for(int i=0; i<c; i++){
//         for(int j=0; j<r; j++){
//             printf("%d ", brr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, count = 0, power = 1, temp, rem, result=0;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     temp = n;
//     while(temp!=0){
//         count++;
//         temp /= 10;
//     }
//     temp = n;
//    while(temp!=0){
//         rem = temp%10;
//         power = 1;
//         for(int i=1; i<=count; i++){
//             power *= rem;
//         }
//         result += power;
//         temp /= 10;
//     }

//     if(result==n){
//         printf("Armstrong");
//     }
//     else{
//         printf("Not Armstrong");
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, temp;
//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     printf("Enter array: ");
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }

//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(arr[j]>arr[j+1]){
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



#include<stdio.h>

int main(){
    int n, a = 0, b=1, next;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
       printf("%d, ", a);
       next = a+b;
       a=b;
       b = next;
    }
    
    return 0;
}