#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    printf("enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    int T=(2*a)+sqrt(b)+(9*c);
    printf("%d = 2*%d + %d^(1/2) + 9*%d",T,a,b,c);
}