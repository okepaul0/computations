#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,d,i;
    
    scanf("%d %d",&n,&d);
    i = (n>d)?n:d;
    for(;i>0;i--){
        if(d%i==0 && n%i==0){
            printf("%d\n", i);
             break;
        }
    
    }
    return 0;
}   