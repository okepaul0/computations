#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char Names[10][10];long index[10]={0};int values[10][10]={0};
    for(int i = 0; i<10;i++) {
        scanf("%ld",&index[i]);
        scanf("%s",Names[i]);
        for(int j = 0;j<8;j++){
            scanf("%d",&values[i][j]);
            if(j>0){
                values[i][8] += values[i][j];
            }
        }
        values[i][9] = values[i][8]/7;
    }
    int k = values[0][8],l=0;
    for(int i = 1;i<10;i++){
        k = (values[i][8]>k ? values[i][8]:k );
        l= (k==values[i][8]? i : l);
    }
    printf("%ld %s %d ",index[l],Names[l],values[l][0]);
    for(int j = 1;j<8;j++){
        printf("%.2f ",(float)values[l][j]);
    }
    printf("\n");
        return 0;}
