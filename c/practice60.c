#include <stdio.h>

struct dist1{
    int mt;
    int cm;
};
struct dist2{
    int in;
    int ft;
};

int main(){
    struct dist1 a;
    struct dist2 b;
    printf("enter the distance in imperial: ");
    scanf("%dft %din",&b.ft,&b.in);
    a.cm=(b.ft*30)+(b.in*3);
    a.mt=a.cm/100;
    a.cm=a.cm%100;
    printf("%dm %dcm",a.mt,a.cm);
}