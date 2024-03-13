#include <stdio.h>

int area(int r){
     int a=(22/7)*r*r;
     return a;
}

int circumference(int r){
     int c=2*22/7*r;
     return c;
}

int main(){
     int r;
     printf("enter the radius: ");
     scanf("%d",&r);
     printf("the area is: %d\n",area(r));
     printf("the circumference is: %d\n",circumference(r));
}