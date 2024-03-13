#include <stdio.h>
//swapping using reference

void swap1(int* x,int* y){
     int* t=x;
     x=y;
     y=t;
}

int main(){
     int a=10;
     int b=-100;
     int* ap=&a;
     int* bp=&b;
     swap1(ap,bp);
     printf("%d %d\n",*ap,*bp);   
}