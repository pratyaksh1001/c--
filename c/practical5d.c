#include <stdio.h>
#include <math.h>
int main(){
    int b,p;
    printf("enter p,b: ");
    scanf("%d %d",&p,&b);
    int h=sqrt((b*b)+(p*p));
    printf("%d = (%d^2 + %d^2)^(1/2)",h,b,p);
}