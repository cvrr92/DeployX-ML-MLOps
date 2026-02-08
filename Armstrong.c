// #include<stdio.h>

// int main(){
//     int n, rev=0, rem, count = 0, arm = 1;

//     printf("Enter a Numbe: ");
//     scanf("%d", &n);
//     int temp = n;
//     int n1 = n;
//     while(n!=0){
//         n = n/10;
//         count++;
//     }
//     while(n1!=0){
//         rem = n%10;
//         n = n/10;
//         for(int i = 1; i<=count; i++){
//         arm = rem*rem;
//         }
//     }

//     if(temp==arm){
//         printf("Armstrong Number");
//     }
//     else{
//         printf("Not Armstrong Number");
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n, org, fact, str = 0, rem;
//     printf("Enter A Number: ");
//     scanf("%d", &n);
//     org = n;
//     while(n!=0){
//         rem = n%10;
//         fact  = 1;
//         for(int i = 1; i<=rem; i++){
//             fact *= i;
//         }
//         str += fact;
//         n = n/10;
//     }
//     if(org==str){
//         printf("Strong Number");
//     }
//     else{
//         printf("Not Strong Number.");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n, i, j;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
    
//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i=1; i<=n; i++){
//         for(j=n-1; j>=i; j--){
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
//     for(i=1; i<=n; i++){
//         for(j=1; j<=n; j++){
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
//             printf("%d", j);
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

//     for(i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//             printf("%d", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }
