#include<string.h>
#include<stdio.h>

int main(){
    char str[100]; int n= 100;
	int ch, i = 0;
    while ((ch = getchar()) != '\n')
	    if (i < n)
	      str[i++] = ch;
	  str[i] = '\0'; 
    for(;i>=0;i--){
        printf("%c",str[i-1]);
    }
    printf("\n");
	  return 0;
	}
