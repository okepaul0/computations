#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SelectionSort(int A[],int s,int m){
    int con=0;
    int acon=0;
    int k=0;int j;int i;
    for( i= m;i>=s;i--){
        con = A[s];
        for( j=s;j<=i;j++){
            if(A[j]<=con){
                con=A[j];
                acon =j;
            }
        }
    k = A[i];
    A[i]=con;
    A[acon] = k;
    }
}

int main(){
    int n,p,q;
    scanf("%d",&n);
    int w[100];

    for(int i=0;i<n;i++){
        scanf("%d", &w[i]);
    }
    scanf("%d %d",&p,&q);
    SelectionSort(w,p,q);
    for(int i=0;i<n;i++){
        printf("%d ",w[i]);
    }
    printf("\n");
    return 0;
}