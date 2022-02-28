#include<stdio.h>

int main(){
   int n;
    scanf("%d", &n);
   while(n<0||n>100){
      scanf("%d", &n);
    }
   int m[n],p[n];
   for(int i=0;i<n;i++){
       scanf("%d", &m[i]);
   }
   for(int i=0;i<n;i++){
       scanf("%d", &p[i]);
   }
   for(int i=0;i<n;i++){
       printf("%d ", m[i]+p[i]);
   }
   return 0;
}