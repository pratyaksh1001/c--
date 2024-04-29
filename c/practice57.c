#include <stdio.h>

int digitsum(int n,int s){
    if(n==0){
        return s;
    }
    else{
        s+=(n%10);
        n/=10;
        digitsum(n,s);
    }
}
int main(){
    int n=12345;
    int s=0;
    printf("%d\n",digitsum(n,s));
}