#include <stdio.h>

int main(){
    int a;
    int r=0;
    printf("enter the number: ");
    scanf("%d",&a);
    while(a>0){
        r+=a%10;
        a/=10;
    }
    printf("the sum of digits is %d",r);
}