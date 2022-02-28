#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int average(){
    int n;
    printf("\n\n\t\t***************************\n");
    printf("\t\t* WELCOME TO AVERAGE MENU *");
    printf("\n\t\t***************************\n\n");
    printf("Input values of a combination b in form: a b")
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",a[i]);
    }
    int sum = 0;
    for(int i=0; i<n;i++){
        sum +=a[i];
    }
    return sum;
}

long ftl(){
    int a;
printf("\n\n\t\t***************************\n");
    printf("\t\t* WELCOME TO FACTORIAL MENU *");
    printf("\n\t\t***************************\n\n");
    printf("Input values of a combination b in form: a b")
    scanf("%d",a);
    long fact;
    while (a>0){
        fact *= a;
        a--;
    }
    return fact;
}

long permutation(){
    int n, int m;
    printf("\n\n\t\t***************************\n");
    printf("\t\t* WELCOME TO PERMUTATION MENU *");
    printf("\n\t\t***************************\n\n");
    printf("Input values of a permutation b in form: a b")
    scanf("%d",&n,&m);
    long long perm = ftl(n)/(ftl(m));
    printf("%lld", perm);
    return 0;
}

long combination(){
    int n, int m;
    printf("\n\n\t\t***************************\n");
    printf("\t\t* WELCOME TO COMBINATION MENU *");
    printf("\n\t\t***************************\n\n");
    printf("Input values of a combination b in form: a b")
    scanf("%d",&n,&m);
    long long comb = ftl(n)/(ftl(m)*ftl(n-m));
    printf("%lld", comb);
    return 0;
}

int main(){
    int k;
    printf("\n\n\t*************************************\n");
    printf("\t* Welcome To Arithemetic Calculator *\n");
    printf("\t*************************************");
    printf("\n\n\tPlease select operation to perform");
    printf("\n\n\tFactorial\t[1]");
    printf("\n\n\tCombination\t[2]");
    printf("\n\n\tPermutation\t[3]");
    printf("\n\n\tAverage\t[4]");
    scanf("%d",&k);
    switch(k){
        case 1: ftl();
            break;
        case 2: combination();
            break;
        case 3: permutation();
            break;
        case 4: average();
            break;
        default:;
    }
    return 0;
}