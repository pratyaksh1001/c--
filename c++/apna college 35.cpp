//find the count of numbers that are only divisible by 3 or by 7 not by both
#include <iostream>
using namespace std;

int main(){
    int c1=0,c2=0,c3=0;
    for(int j=1;j<=1000;j++){
        if(j%3==0){
            c1++;
        }
        if(j%5==0){
            c2++;
        }
        if(j%5==0 && j%3==0){
            c3++;
        }
    }
    printf("the count of number divisible by 3 or 7 and not both is: %d",c1+c2-c3);
}