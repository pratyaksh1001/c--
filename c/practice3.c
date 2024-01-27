#include <stdio.h>

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int r=1;
    while(n>0){
        r=r*n;
        n--;
    }
    printf("the factorisl is: %d",r);
}