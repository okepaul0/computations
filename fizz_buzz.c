#include<stdio.h>

int mod_3(int i,int k){
     k = i;
    for(int j;k>=0;j++){
        k -=3;
    }
    return k;
}

int mod_5(int i,int k){
     k = i;
    for(int j;k>=0;j++){
        k -=5;
    }
    return k;
}

int mod_15(int i,int k){
    k = i;
    for(int j;k>=0;j++){
        k -=15;
    }
    return k;
}

int main(){
    int i =1,k =0;
    for(;i<=50;i++){
      printf(mod_15(i,k)==0?"FizzBuzz":mod_5(i,k)==0?"Buzz":mod_3(i,k)==0?"Fizz":"%d",i);
        //printf("%d",mod_15(i)!=0 ? 2 : 5);
    }
    return 0;
}

