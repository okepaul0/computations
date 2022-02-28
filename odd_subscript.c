#include<stdio.h>

int main(){
   int n;
    scanf("%d", &n);
   while(n<0||n>100){
      scanf("%d", &n);
    }
   int m[n];
   for(int i=0;i<n;i++){
       scanf("%d", &m[i]);
   }
   for(int i=0;i<n;i++){
       printf( i%2==0 ? "" : "%d ", i%2==0 ?: m[i]);
   }
   return 0;
}