#include<stdio.h>

int main(){
    int M[5][5] ={0};
    int sumr[5]={0}, sumc[5]={0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&M[i][j]);
            sumr[i] +=M[i][j];
            sumc[j] +=M[i][j];
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",sumr[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",sumc[i]);
    }
        return 0;
}