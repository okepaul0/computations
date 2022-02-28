#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    while (n<1||n>100){
        scanf("%d",&n);
    }
    int M[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&M[i][j]);
            while (M[i][j]>9){
               scanf("%d",&M[i][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
        printf("%d ",M[i][j]);
        }
        printf("\n");
    }
      return 0;
}
    
    // int sumr[5]={0}, sumc[5]={0};
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         scanf("%d",&M[i][j]);
    //         sumr[i] +=M[i][j];
    //         sumc[j] +=M[i][j];
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d ",sumr[i]);
    // }
    // printf("\n");
    // for(int i=0;i<5;i++){
    //     printf("%d ",sumc[i]);
    // }
      