#include <stdio.h>

int main(){
    int u,t,a;
    printf("enter u,a,t: ");
    scanf("%d %d %d",&u,&a,&t);
    int s=(u*t)+(1/2*a*t*t);
    printf("%d=%d*%d + 1/2*%d*%d^2",s,u,t,a,t);

}