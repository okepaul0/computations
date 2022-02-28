#include<stdio.h>

int main(){
    double k= 0.001,n,x,nx,nn,t,y;
    printf("Input values for n\n");
    scanf("%lf",&n);
    printf("Input values for x\n");
    scanf("%lf",&x);
    printf("Input values for nx\n");
    scanf("%lf",&nx);
    printf("Input values for nn\n");
    scanf("%lf",&nn);
    t = n ;
    for(;n<=nn;){
        y = x + (n-5);
        n +=k;
        if (n == nn+k){
            
    }
    }

    return 0;
}