#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int P[n][m];
    int sumE=0, sumI=0, sumT=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&P[i][j]);
            sumT+=P[i][j];
            sumE+=(i==0||i==(n-1)||j==0||j==(m-1)?P[i][j]:0) ;
        }
    }
    sumI = sumT - sumE;
    printf("%d\n", (sumE - sumI));
    return 0;
}