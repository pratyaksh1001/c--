#include <stdio.h>
//count the digits using recursion
int count(int n,int c){
    if(n<10){
        return c;
    }
    else{
        c++;
        n/=10;
        count(n,c);
    }
}
int main(){
    int n=5;
    int c=1;
    printf("%d\n",count(n,c));
}