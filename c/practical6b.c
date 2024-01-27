/*
Write a program to swap two variable:
b) without using temp
*/
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a is %d\nb in %d",a,b);
}