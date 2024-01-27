/*
Write a Program to perform addition, subtraction, division and 
multiplication of two numbers given as input by the user.
*/
#include <stdio.h>

int main(){
    int x;
    int y;
    printf("enter the first number: ");
    scanf("%d",&x);
    printf("enter the second number: ");
    scanf("%d",&y);
    printf("%d + %d = %d\n",x,x,x+y);
    printf("%d * %d = %d\n",x,y,x*y);
    printf("%d / %d = %d\n",x,y,x/y);
    printf("%d - %d = %d",x,y,x-y);
}