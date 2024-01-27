/*
Write a program to evaluate each of the following equations.
(i) V = u + at. (ii) S = ut+1/2at^2
(iii) T=2*a+√b+9c (iv) H=√b
2+p
*/
#include <stdio.h>

int main(){
    int u=0;
    int a=0;
    int t=0;
    printf("enter u,a,t: ");
    scanf("%d %d %d",&u,&a,&t);
    int v=u+(a*t);
    printf("%d=%d+(%d*%d)",v,u,a,t);
}