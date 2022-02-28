#include <stdio.h>
#include<string.h>

int main(){
   char *str;
   fgets(str,sizeof(str),stdin);
   fputs(str,stdout);
   return 0;
}