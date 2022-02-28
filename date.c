#include <stdio.h>
#include <math.h>

int main() {
    int yyyy , mm, dd, leap ;
    
    scanf("%d-%d-%d", &yyyy , &mm , &dd);
   
    leap = yyyy % 4;
   
    if(leap ==0){
        if(mm==1){
            printf("%d", dd);
        }
        else if(mm==2){
            int day = 31;
            printf("%d", day+dd);
        }
        else if(mm==3){
            int day = 60;
            printf("%d", day+dd);
        }
        else if(mm==4){
            int day = 91;
            printf("%d", day+dd);
        }
        else if(mm==5){
            int day = 121;
            printf("%d", day+dd);
        }
        else if(mm==6){
            int day = 152;
            printf("%d", day+dd);
        }
        else if(mm==7){
            int day = 182;
            printf("%d", day+dd);
        }
        else if(mm==8){
            int day = 213;
            printf("%d", day+dd);
        }
        else if(mm==9){
            int day = 244;
            printf("%d", day+dd);
        }
        else if(mm==10){
            int day = 274;
            printf("%d", day+dd);
        }
        else if(mm==11){
            int day = 305;
            printf("%d", day+dd);
        }
        else if(mm==12){
            int day = 335;
            printf("%d", day+dd);
        }
    }
    else{
         if(mm==1){
            printf("%d", dd);
        }
        else if(mm==2){
            int day = 31;
            printf("%d", day+dd);
        }
        else if(mm==3){
            int day = 59;
            printf("%d", day+dd);
        }
        else if(mm==4){
            int day = 90;
            printf("%d", day+dd);
        }
        else if(mm==5){
            int day = 120;
            printf("%d", day+dd);
        }
        else if(mm==6){
            int day = 151;
            printf("%d", day+dd);
        }
        else if(mm==7){
            int day = 181;
            printf("%d", day+dd);
        }
        else if(mm==8){
            int day = 212;
            printf("%d", day+dd);
        }
        else if(mm==9){
            int day = 243;
            printf("%d", day+dd);
        }
        else if(mm==10){
            int day = 273;
            printf("%d", day+dd);
        }
        else if(mm==11){
            int day = 304;
            printf("%d", day+dd);
        }
        else if(mm==12){
            int day = 334;
            printf("%d", day+dd);
        }
    }
    return 0;
}