#include<stdio.h>
int main(){
    int n, first, last;
    printf("Kuch to likh: ");
    scanf("%d", &n);
    scanf("%d", &first);
    scanf("%d", &last);
    int start = first+n;
    for(int i = start; i<=last; i+=n){
        printf("%d ", i);

    }
    return 0;
}