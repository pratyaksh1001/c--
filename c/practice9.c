#include <stdio.h>

int main(){
    int x;
    printf("enter the score: ");
    scanf("%d",&x);
    switch(x){
        case 0 ... 39:
        printf("fail");
        break;
        case 40 ... 49:
        printf("C");
        break;
        case 50 ... 59:
        printf("B");
        break;
        case 60 ... 69:
        printf("B+");
        break;
        case 70 ... 79:
        printf("A");
        break;
        case 80 ... 100:
        printf("A+");
        break;
    }
}