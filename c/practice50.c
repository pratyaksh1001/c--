#include <stdio.h>
#include <string.h>
int fact(int x){
    int r=1;
    while(x>0){
        r*=x;
        x--;
    }
    return r;
}

int arm(int a){
    int r=0;
    while(a>0){
        int x=a%10;
        r+=(x*x*x);
        a/=10;
    }
    if(r==a){
        return 1;
    }
    else{
        return 0;
    }
}

int prime(int a){
    int f=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            f++;
        }
    }
    if(f==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a=5;
    int b=20;
    int c=29;
    int r1=fact(a);
    int r2=arm(b);
    int r3=prime(c);
    printf("%d\n%d\n%d\n",r1,r2,r3);
}