#include <stdio.h>

int main(){
     int n;
     printf("enter the number: ");
     scanf("%d",&n);
     int c=0;
     int r=0;
     while(n>0){
          r*=10;
          r+=n%10;
          n/=10;
          c++;
     }
     printf("the reverse of the number is %d\n",r);
     printf("the number of digits is: %d\n",c);
}