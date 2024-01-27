/*
Write the following programs using switch case statement:
b)  To check whether a number is positive, negative or zero
*/
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    switch(a){
        case -100000 ... -1:
        printf("the number is negative");
        break;
        case 1 ... 1000000:
        printf("the number is positive");
        break;
        default:
        printf("the number is 0");
        break;
    }
}