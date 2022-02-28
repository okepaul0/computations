#include<stdio.h>
  #include<string.h>
  int a[10];
  int check(int x, int y) {
    if (y > 98765) return 0;
    memset(a, 0, sizeof(a));
    if (x < 10000) a[0] = 1;
    while (x) {
      a[x%10] = 1;
     x /= 10;
   }
   while (y) {
     a[y%10] = 1;
     y /= 10;
   }
   int sum = 0;
   for (int i = 0; i < 10; i++)
     if (a[i]) sum++;
   return (sum == 10);
 }
 int main() {
   int n, count = 0;
   scanf("%d", &n);
   while(n>79||n<2) {
       scanf("%d", &n);
   }
   while (n) {
     int flag = 1;//
     if (count++) printf("\n");
     for (int i = 1234; i < 100000; i++) {
       if (check(i, i*n)) {//
         printf("%05d/%05d=%d\n", i*n, i, n);
         flag = 0;
       }
     }
     return 0;
   }
 }