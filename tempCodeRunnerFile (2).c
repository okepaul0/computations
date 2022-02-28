#include<stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int M[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&M[i][j]);
        }
    }
    int sumr[n], sumc[m];
    for(int i=0;i<n;i++){
        sumr[i]=0;
    }
    for(int i=0;i<m;i++){
        sumc[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&M[i][j]);
            sumr[i] +=M[i][j];
            sumc[j] +=M[i][j];
        }
    }
    for(int i=0;i<n;i++){
       printf("%d ",sumr[i]);
    }
    printf("\n");
    for(int i=0;i<m;i++){
        printf("%d ",sumc[i]);
    }
    return 0;
}