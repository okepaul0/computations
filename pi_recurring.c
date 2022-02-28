#include <stdio.h>

int main(){
    double p =0, PI;

    for(double i=1;i<=1000000;i+=4){
        p += ((1/i)-(1/(i+2)));
    }
    PI = 4*p;
    printf("%.4lf\n", PI);
    return 0;
}
    