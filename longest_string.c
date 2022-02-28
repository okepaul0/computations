#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *search(char *cpsource, char ch){
    int k = 0;k=strlen(cpsource);
    int max =0,temp = 0;
    for(int i = 0; i<k;i++){
        if(cpsource[i]==ch){
            temp++;
        }
        else{
            max = (max<temp ? temp: max);
            temp=0;
        }
    }
    max = temp;
    while(max>0){
        printf("%c",ch);
        --max;
    }
}

int main(){
    char string[100];
    char ch;
    scanf("%s\n",string);
    scanf("%c",&ch);
    *search(string,ch);
    return 0;
}