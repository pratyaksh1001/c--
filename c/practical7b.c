/*
Write a Program to find the greatest among three numbers using:
b) using if-else
*/
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int r;
    if(a>b){
        if(a>c){
            r=a;
        }
        else{
            r=c;
        }
    }
    else{
        if(b>c){
            r=b;
        }
        else{
            r=c;
        }
    }
    printf("the greatest integer is: %d",r);
}