#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    printf("the sum of %d and %d is: ",a,b);
    int c=a^b;
    printf("%d",c);
}