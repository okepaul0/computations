#include <stdio.h>
#include <math.h>
int main(){
    long long x, y,p,t;
    scanf("%lld %lld", &x,&y);
    p = pow(x,y);
    int c[3] = {0};

    for(long long i=p,j=2;i>0 && j >=0;j--){
        c[j] = i%10;
        i /= 10;
    }

    for(int j = 0; j <= 2; j++){
        printf("%d", c[j]);
    }
      printf("\n");
    return 0;
}