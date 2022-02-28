#include<stdio.h>
#include<stdbool.h>

int main(){
    int n,v,w,z,num,den;
    scanf("%d",&n);
    while(n<2||n>79){
        scanf("%d",&n);
    }
    
    int d[12],c[12];
    for(int i = 1;i<=1283;i++){
        num= n*i;
        den= i;
        v=0;
        bool kunle = true;
    
        for(int j=num,l=den,k=0;j>0||l>0;k++){
            if(j!=0){
                z=k;
            }
            if(l!=0){
                w=k;
            }
            d[k] = j%10;
            c[k] = l%10;
            for(int q=0;q<k;q++){
                if(d[k]==d[q]||c[k]==c[q]){
                    kunle=false;
                    break ;
                }
            }
            v += (d[k]+ c[k]);
            j /=10; l /=10;
            
        }

      
        bool valid = true;
        for(int k=0;k<w && valid;k++){
            for(int j=0;j<z;j++){
                if(d[j]==c[k]){
                    valid = false;
                    break ;
                }
            }
        }
    
        if(valid&&kunle&&v==45){
            printf("%d/%d",num,den);
            printf("\n");
        }
    }
    return 0;
}