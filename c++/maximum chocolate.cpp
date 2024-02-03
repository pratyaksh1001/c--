//maximum chocolate problem
//you can buy 1 chocolate from 3 wrappers and cost of chocolate is 1 rupee for 1
#include <iostream>
using namespace std;

int chocolate(int x,int total){
    
    if(x<3){
        return total;
    }
    else{
        int f;
        total+=x/3;
        x=x/3+x%3;
        f=total;
        chocolate(x,f);
    }
}

int main(){
    int n;
    printf("enter the money you have: ");
    scanf("%d",&n);
    printf("the number of chocolates is: %d",chocolate(n,n));
}