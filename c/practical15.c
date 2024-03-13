#include <stdio.h>

void perfect(int n){
     int r=0;
     for(int i=1;i<n;i++){
          if(n%i==0){
               r+=i;
          }
     }
     if(n==r){
          printf("the number is perfect number\n");
     }
     else{
          printf("the number is not perfect\n");
     }
}
void prime(int n){
     int f=0;
     for(int i=2;i<n;i++){
          if(n%i==0){
               f++;
          }
     }
     if(f==0){
          printf("the number is prime\n");
     }
     else{
          printf("the number is not prime\n");
     }
}

void fib(int n){
     int f=0;
     int t1=0;
     int t2=1;
     int t3=0;
     while(t3<=n){
          if(t3==n){
               printf("the number is a fibonacci number\n");
               return;
          }
          t3=t1+t2;
          t1=t2;
          t2=t3;
     }
     printf("the number is not a fibonacci number\n");
}

int main(){
     prime(11);
     fib(8);
     perfect(6);
}