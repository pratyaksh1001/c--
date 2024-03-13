#include <stdio.h>

int main(){
     int n;
     int s=0;
     printf("enter the number: ");
     scanf("%d",&n);
     while(n>0){
          s+=n;
          n--;
     }
     printf("the sum is: %d\n",s);
}