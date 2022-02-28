#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lf(int a,int b){
    int x,y,z,k,l;
    x=a;
    y=b;
    while(k !=0){
        k = a%b;
        a=b;
        b=k;
    }
    x /=a;
    y /=a;
    printf("%d/%d",x,y);
    return 0;
}

int main(){
    int u/*rightside*/,d,t,l;
    u=0;d=0;t=0;l=0;
    char result[1000];
    scanf("%s",result);
    l = strlen(result);
    while(l<1||l>1000){
        scanf("%s",result);
        l = strlen(result);
    }
    for(int i = 0; i<l ; i++){
        u= (result[i]=='U'? u+1 : u);
        d= (result[i]=='D'? d+1 : d);
        if(result[i]=='S'){
            printf("WA");
            return 0;
        }
        t= u+d;
    }printf("%d",t);
    double m= ((double)u/t)<0.5 ? (0.5-((double)u/t)) : (((double)u/t) - 0.5);
    if(m>0.003){
        printf("Fail");
        return 0; 
    }
    else{
        lf(u,t);
    }
    return 0;
}

