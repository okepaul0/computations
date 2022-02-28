#include<stdio.h>
#define  N 10
void adder(int p[],int n, int *b);

int main(){
    int value[N], sum,*d;
    d= value;
    for(int i=0; i<N; i++){
        scanf("%d",d);
        d++;
    }
    adder(value,N,&sum);
    return 0;
}

void adder(int p[],int n , int *b){
    *b = 0;
    for(int i =0;i<n; i++){
        *b += p[i];
    }
    printf("%d\n",*b);
}