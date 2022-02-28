#include <stdio.h>

void array(int a[],int n){
    int k=0;
    for(int i=3;i>=0;i--){
        k = (n%10)+5;
        a[i] = k%10;
        n /= 10;
    }
}

int main(){
    int n; int a[4]={0};
    scanf("%d", &n);
    array(a,n);
    for(int i=3;i>=0;i--){
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}

