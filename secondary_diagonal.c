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
        for(int j=0;j<n;j++){
            printf(j!=n-1-i?"  ":"%d ",j!=n-1-i?:M[i][j]);
        }
        printf("\n");
    }
      return 0;
}
    
   