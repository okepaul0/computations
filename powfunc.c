#include<stdio.h>

int main(){
    int num,p,k;
    scanf("%d", &num);
    int b[num] ;
    p = k= num*num*num;
    p /=num;
    p -= (num-1);

    for(int j=0 ;j<num; j++){
        b[j] = p;
        p +=2;
    }
    printf("%d*%d*%d=%d=",num,num,num,k);
    for(int i=0;i<num;i++){
        if(i==0){
            printf("%d",b[i]);
        }
        else{
            printf("+%d",b[i]); 
        }
    }
    printf("\n"); 
    return 0;
}