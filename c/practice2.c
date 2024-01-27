#include <stdio.h>
//write a code to find the exponential of a number
int main(){
    int n;
    int p;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("enter the power: ");
    scanf("%d",&p);
    int r=1;
    for(int i=0;i<p;i++){
        r=r*n;
    }
    printf("%d",r);
}