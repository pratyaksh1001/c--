#include <stdio.h>

int main(){
    int a=10;
    int b=2;
    int c=4;
    printf("the result of %d*%d/%d=%d\n",a,b,c,a*b/c);
    printf("the result before post increment is: %d\n",a++);
    printf("the result after post increment is: %d\n",a);
}