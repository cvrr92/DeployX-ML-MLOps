#include<stdio.h>
    int main(){
        int sum[2][2];
        int arrA[2][2]={{3,4},{4,5}};
        int arrB[2][2]={{6,7},{9,8}};
        
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                sum[i][j]= arrA[i][j]+arrB[i][j];

            
            }
        }
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("%d",sum[i][j]);

            }
        }            

        return 0;


    }