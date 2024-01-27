#include <stdio.h>

int main(){
    int a,b,s,p,su,d;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    s=a+b;
    p=a*b;
    d=a/b;
    su=a-b;
    printf("the sum of %d and %d = %d \n",a,b,s);
    printf("the product of %d and %d = %d \n",a,b,p);
    printf("the subtraction of %d and %d = %d \n",a,b,su);
    printf("the division of %d and %d = %d",a,b,d);
}