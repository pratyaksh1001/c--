#include <stdio.h>
int main(){
    int n1=1;
    int n2=100;
    if(n1<=1){
        n1=2;
    }
    for(int i=n1;i<=n2;i++){
        int f=0;
        for(int j=2;j<i/2;j++){
            if(i%j==0){
                f++;
            }
        }
        if(f==0){
            printf("%d\n",i);
        }
    }
}