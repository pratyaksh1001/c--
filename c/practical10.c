#include <stdio.h>

int main(){
     int n;
     int t;
     printf("enter the number: ");
     scanf("%d",&n);
     t=n;
     int r=0;
     for(int i=0;i<10;i++){
          int x=n%10;
          r+=(x*x*x);
          n/=10;
     }
     if(r==t){
          printf("True\n");
     }
     else{
          printf("False\n");
     }
}