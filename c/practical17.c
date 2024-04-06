#include <stdio.h>

int main(){
     int a=10;
     int b=20;
     int t=a;
     int* bp=&b;
     int* tp=&t;
     a=*bp;
     b=*tp;
     printf("%d is a\n%d is b\n",a,b);
}