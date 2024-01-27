#include <stdio.h>

int fib(int t1,int t2,int c){
    c++;
    int t3;
    if(c<20){
        t3=t1+t2;
        printf("%d\n",t3);
        fib(t2,t3,c);
    }
    else{
        return 0;
    }
}

int main(){
    int t1=0;
    int t2=1;
    int c=0;
    fib(t1,t2,c);
}