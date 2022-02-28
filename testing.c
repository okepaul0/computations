#include <stdio.h>
#include <stdbool.h>

int main(){
    int num[5], den[5], numer, denum;

    int myInput;
    scanf("%d", &myInput);

    for(int i = 1; i*myInput < 99999; i++){
        numer = i*myInput;
        denum = i;

        bool repeated = false;
        for(int ntrack = numer, dtrack = denum, j = 0; !repeated && j < 5; j++){
            num[j] = ntrack % 10;
            den[j] = dtrack % 10;

            // printf("%d/%d", num[j], den[j]);

            //check if digit is repeated
            for(int k = 0; k < j; k++){
                if(num[j] == num[k] || den[j] == den[k]){
                    repeated = true;
                    break;
                }
            }

            ntrack /= 10;
            dtrack /= 10;
        }


        bool intersect = false;
        if(!repeated){
            for(int j = 0; j < 5; j++){
                for(int k = 0; k < 5; k++){
                    if(num[j] == den[k]){
                        intersect = true;
                        break;
                    }
                }
            }
        }

        if(!repeated & !intersect){
            for(int x = 4; x >= 0; x--){
                printf("%d", num[x]);
            }
            printf("/");
            for(int y = 4; y >= 0; y--){
                printf("%d", den[y]);
            }
            printf("\n");
            break;
        }
    }
    return 0;
}