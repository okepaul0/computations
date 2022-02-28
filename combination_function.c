#include <stdio.h>
int factorial(int a);/*This is a function that calculates the product
 of all values from the input value to 1. This function is a Recusive one*/
int combination(int a,int b);/*This function uses the factorial function to solve 
a more complicated mathematical problem COMBINATION*/
/*The main function gets two inputs whose combination is to be calculated and
provides a solution using the combination and factorial function*/

int main(){
    int a, b;
    printf("Please input the two values separating them with space\n");
    scanf("%d %d",&a,&b);
    printf("%d combination %d is %d\n",a,b,combination(a,b));
    return 0;
}

int factorial(int a){
    int c=a;
    if(a<=1){
        return 1;
    }
    else{
        return c*factorial(c-1);
    }
}

int combination(int a,int b){
    int c = factorial(a)/(factorial(a-b)*factorial(b));
    return c;
}