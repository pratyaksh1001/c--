/*
Write a program to swap two variable:
a) By using temporary variable
*/
#include <stdio.h>

int main(){
    int a;
    int b;
    int t;
    scanf("%d %d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("a is %d\nb is %d",a,b);
}