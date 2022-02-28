#include<stdio.h>

int main(){
    double p= 0;
    for(double m=2, n=1,b=0,i=0;i<20;i++){
        p += (m/n);
        b = m;
        m += n;
        n = b;
    }
    printf("%lf\n",p);
    return 0;
}