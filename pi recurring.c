#include <stdio.h>

int main(){
    double p =0, PI;

    for(int i=1;i<=1000001;i+=2){
        p += ((1/i)-(1/(i+2));
    }
    PI = 4*p;
    printf("%.4lf\n", PI);
    return 0;
}
    