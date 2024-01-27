/*
Write a Program to find the greatest among three numbers using:
a) Conditional Operator
*/
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int r;
    r=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("the greatest integer is: %d",r);
}