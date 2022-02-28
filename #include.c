#include<stdio.h>

int main(){
    int a = 10;
    int *p;
    p = &a;
    //scanf("%d",&a);
    printf("%d",*p);
    return 0;
}