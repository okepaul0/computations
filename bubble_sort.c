#include <stdio.h>

void bubblesort(int A[],int n){
    int con;
    for(int i= n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(A[j]<A[j+1]){
                con=A[j];
                A[j]=A[j+1];
                A[j+1]=con;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int A[n];

    for(int i=0;i<n;i++){
        scanf("%d", &A[i]);
    }

    bubblesort(A,n);
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}

