#include <stdio.h>
//print the sum of first n natural numbers
int fun1(int n,int s){
    if(n==0){
        return s;
    }
    else{
        s+=n;
        n--;
        fun1(n,s);
    }
}

int main(){
    int n=5;
    int s=0;
    printf("%d\n",fun1(n,s));
}