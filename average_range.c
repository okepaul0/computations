#include <stdio.h>

double avg(int A[],int s,int e){
    double sum;
    for(int i=s;i<=e;i++){
        sum+=A[i];
    }
    sum = sum/((e-s)+1);
    printf("%lf\n",sum);
    return sum;
}

int main(){
    int n,s,e;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d%d",&s,&e);
    avg(A,s,e);
    return 0;
}
