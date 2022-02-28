#include <stdio.h>
 #include<stdlib.h>
int main(){

int profit;

scanf("%d", &profit);

if( profit <= 100000 ){
    profit *= 0.10;
  printf("%f",profit);
}
else if(profit <= 200000){
         profit *= 0.075;
        printf("%f",profit);
}
else if(profit <= 400000){
         profit *= 0.05;
        printf("%f",profit);
}
else if(profit <= 600000){
         profit *= 0.03;
        printf("%f",profit);
}
else if(profit <= 1000000){
         profit *= 0.015;
        printf("%f",profit);
}
else {
         profit *= 0.01;
        printf("%f",profit);
}
return 0;
}