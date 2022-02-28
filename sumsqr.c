#include <stdio.h>
#include <math.h>

int main(){
    int sum, value;
    scanf("%d", &value);
    for(int i = 1; i <= value && sum  <= value ; i++) {
        if(i%3 == 0)
        continue;
        sum += (i*i);
    }
    printf("%d\n",sum);
    return 0;
}