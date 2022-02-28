#include<stdio.h>

long ftl(int v){
    long fact;
    while (v>0){
        fact *= v;
        v--;
    }
    return fact;
}

long combination(int n, int m){
    long long comb = ftl(n)/(ftl(m)*ftl(n-m));
    printf("%lld", comb);
    return 0;
}
int main(){
    int n,m;
    scanf("%d""%d",&n,&m);
    combination(n,m);
    return 0;
}