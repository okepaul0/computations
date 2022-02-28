#include <stdio.h>
#include <math.h>

int leap_year(int a,int b);/*This function tells us if the year is a leap year or not*/
int day_calc(int a,int b,int c);/*This function calculates the day out of 365 or 366 if
it is a leap year*/
int title(int a);/*This function helps us get the title of the day: "st" 
"nd" "rd" or "th"*/
int month(int a);/*This function convert month value of the gregorian calendar into their string name
and print it*/

int main(){
    int leap , yyyy , mm , dd;
    printf("Input date in format yyyy-mm-dd\n");
    scanf("%ld-%ld-%ld",  &yyyy,&mm,&dd);
    leap_year(yyyy,leap);
    month(mm);
    printf(" %d",dd);
    title(dd);
    printf(" is the %d",day_calc(mm,dd,leap));
    title(day_calc(mm,dd,leap)%10);
    printf(" day of the year %d\n",yyyy);
    return 0;
}

int leap_year(int a,int b){
    b = a%4;
    printf( b == 0 ? "This is a leap year\n":"This is not a leap year\n");
    return b;
}

int day_calc(int a, int b,int c){
    int e= 0;
    
    for(int i=0; i<a; i++){
        int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
        
        if(i != a-1){
            e += (c == 0 && i == 1) ? month[i]+1 : month[i];
        }
        else {
            e += b;
        }
    }
    return e;
}

int title(int a){
    printf(a > 3 ?"th": a > 2 ?"rd": a > 1 ?"nd":"st");
}

int month(int a){
    char *month[] = {"","January","Feburary","March","April","May"
    ,"June","July","August","September","October","November","December"};
    printf("%s",month[a]);
}