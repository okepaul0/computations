#include<stdio.h>
#include<string.h>

int main(){
    char *word;
    gets(word);
    //scanf(word,"%s");
    int n = strlen(word);
    //char *wed[n] = word;
    printf("%s",word[0]);
    return 0;
}