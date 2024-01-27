/*
Write a program to calculate the area and the circumference of a 
circle by using radius as the input provided by the user
*/
#include <stdio.h>

int main(){
    int r;
    printf("enter the radius of the circle: ");
    scanf("%d",&r);
    int cir=2*(22/7)*r;
    int area=(22/7)*(r*r);
    printf("the area of the circle is: %d\n",area);
    printf("the circumference of the circle is: %d",cir);
}