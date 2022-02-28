#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#include<stdbool.h>

int matrix();
int shuffle();
int printer();
int replace();
bool bingo();

int main(){
    int n,value;
    scanf("%d", &n);
    int ary[n][n];
    matrix(n,ary);
    shuffle(n,ary);
    printer(n,ary);
    while (1){
        scanf("%d", &value);
        replace(n,value,ary);
        printer(n,ary);
        bingo(n,ary);
    }
    
    return 0;
}

int matrix(int n, int ary[n][n]){
    int i,j,k=1;
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            ary[i][j]=k;
            k++;
        }
    }
    return -1;
}

int shuffle(int n,int ary[n][n]){
    int v,w;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            srand(time(0));
            v = rand()%n;
            srand(time(0));
            w =rand()%n;
            int m = ary[v][w];
            ary[v][w] = ary[i][j];
            ary[i][j] = m;
        }
    }
    return -2;
}

int printer(int n,int ary[n][n]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%.2d ",ary[i][j]);
        }
        
        printf("\n");
    }
    return -3;
}

int replace(int n,int value,int ary[n][n]){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(ary[i][j]==value){
                ary[i][j]= 00;
                return 0;
            }
        }
    }
    return -4;
}

bool bingo(int n,int ary[n][n]){
    int a[(n*2) +2];
    for (int i = 0; i < n*2 +2; i++){
        a[i]=1;
    }
    
    int k=0,l=n,m=2*n,p=2*n+1;
    for(int i = 0;i<n;i++){
        for (int j = 0; j < n; j++){
            a[k] += ary[i][j];
        }
        if((a[k]-1)==0){
            printf("bingo");
            return true;
        }
        k++;
    }
    for(int j = 0;j<n;j++){
        for (int i = 0; i < n; i++){
            a[l] += ary[i][j];
        }
        if((a[l]-1)==0){
            printf("bingo2");
            return true;
        }
        l++;
    }
    for(int i = 0;i<n;i++){
        a[m] += ary[i][i];
    }
    if((a[m]-1)==0){
        printf("bingo3");
        return true;
    }
    for(int i = 0,j =n-1;i<n;i++){
        a[p] += ary[i][j];
        j--;
    }
    if((a[p]-1)==0){
            printf("bingo4");
            return true;
    }

    return false;
}