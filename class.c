#include<stdio.h>

int main(){
    int n;
    while(n<0||n>100){
        scanf("%d",&n);
    }
    int a[n] ;
    int b[n] ;
    int c[n] ;
    for(int i=0;i<n;i++){
        a[i] = i +1;
        b[i] =  a[i] +5 ;
        c[i] =b[i] +5;
            printf("%d ",a[i] );
    }
     printf("\n");
    for(int i=0;i<n;i++){
         printf("%d ",b[i] );
    }
     printf("\n");
    for(int i=0;i<n;i++){
         printf("%d ",c[i] );
    }

    return 0;
}