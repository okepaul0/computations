#include<stdio.h>

int main(){
    long a[2]={0,1},b=0;
    for(int i=0; i<50;i++){
        printf("%ld",a[0]);
        printf(i< 49 ? ",":"");
        b = a[1];
        a[1] +=a[0];
        a[0] = b;
    }
    return 0;
}