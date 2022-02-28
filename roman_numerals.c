#include <string.h>
#include <stdio.h>

int converter(char value[], int convert){
    int spec = strlen(value);
    int cast[spec];
    for(int i=0;i<spec;i++){
        cast[i]=(value[i]=='X'? 10:value[i]=='V'?5:value[i]!='I'?:1);
    }
    for(int i=0;i<spec;i++){
        convert = (i == spec-1) ? (convert+cast[i]): (cast[i]<cast[i+1])?
         (convert-cast[i]):(convert+cast[i]);
    }
    printf("%d\n",convert);
    return 0;
}

int main(){
  char value[15];
    int convert =0;
    scanf("%s",value); 
    converter(value,convert);
    return 0;
}