#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int value;
    
    scanf("%d", &value);

    while(value > 10000){
        scanf("%d", &value);
    }
   
    char str[5];
    sprintf(str, "%d", value);
    int len = strlen(str);


    int array[len];
    int invet[len];

    for (int i = len-1, j = 0; (i >= 0|| j<len); i--, j++) {
        array[i] = value % 10;
        invet[j] = array[i];
        value /= 10;
    }
    
    bool state = true;
    
    for(int i = 0; i < len; i++){
        if(array[i] != invet[i]){
            state = false;
            break;
        }
    }

    printf("%s ", state ? "Yes" : "No" );

    
    return 0;
}