#include <stdio.h>

int prime(int n){
     int f=0;
     for(int i=2;i<n;i++){
          if(n%i==0){
               f++;
          }
     }
     if(f==0){
          printf("%d\n",n);
     }
}

int perfect(int n){
     int r=0;
     for(int i=1;i<n;i++){
          if(n%i==0){
               r+=i;
          }
     }
     if(r==n){
          printf("%d\n",n);
     }
     else{
          return 0;
     }
}

int main(){
     int n1=10;
     int n2=100;
     printf("perfect number: \n");
     for(int i=n1;i<=n2;i++){
          perfect(i);
     }
     printf("prime numbers: \n");
     for(int i=n1;i<=n2;i++){
          prime(i);
     }
}