#include <stdio.h>

int main(){
    int x;
    printf("enter the salary: ");
    scanf("%d",&x);
    switch(x){
        int y;
        case 0 ... 9999:
        y=((x)+(x*0.05));
        printf("the total salary is: %d",y);
        break;
        case 10000 ... 20999:;
        y=((x)+(x*0.05)+(x*0.08));
        printf("the total salary is: %d",y);
        break;
        case 21000 ... 30999:
        y=((x)+(x*0.08)+(x*0.1));
        printf("the total salary is: %d",y);
        break;
        case 31000 ...10000000:
        y=(x+(x*0.1)+(x*0.15));
        printf("the total salary is: %d",y);
        break;
        default:
        printf("enter a valid salary");
    }
}