#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int inverter(char value[1000]){
    int spec = strlen(value);
    printf("%d",spec);
    for(int i=spec-1;i>=0;i--){
        printf("%c",value[i]);
    }
    
        printf("%d",spec);
    
    return 0;
}

int main(){
    char value[1000];
    bool state = true;
    int i=0;
    while (state){
        scanf("%c",value[i]);
        state = value[i]=='\r'?false:true;
        i++;
    }
    inverter(value);
    return 0;
}
