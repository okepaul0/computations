#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    while (n<1||n>100){
        scanf("%d",&n);
    }
    int M[n][n];
    int a[0][0];
    int row,column,max;
    max= a[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&M[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            max=M[i][j]<max?max:M[i][j];row=i;column=j;
        }
    }
    printf("max=%d,row=%d,column=%d\n",max,row,column);
    return 0;
}
    
   