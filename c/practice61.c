#include <stdio.h>

struct time{
    int hour;
    int min;
};

int main(){
    struct time t1,t2,r;
    printf("enter the first time: ");
    scanf("%dh %dm",&t1.hour,&t1.min);
    printf("enter the second time: ");
    scanf("%dh %dm",&t2.hour,&t2.min);
    r.hour=t1.hour+t2.hour+((t1.min+t2.min)/60);
    r.min=(t1.min+t2.min)%60;
    printf("result is: %dhour %dmin",r.hour,r.min);
}