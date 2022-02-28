#include<stdio.h>
int main(){
    for (int i= 1; i <=50; i++){
        printf(i%15 == 0? "\"FizzBuzz\"":i%5 == 0? "\"Buzz\"":i%3 == 0?"\"Fizz\"": "%d",i);
        printf( i==50 ?".\n":",");
    }
    return 0;
}
