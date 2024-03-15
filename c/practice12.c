#include <stdio.h>
#include <math.h>

int fact(int n){
     int r=1;
     for(int i=1;i<=n;i++){
          r*=i;
     }
     return r;
}
void main(){
     int n=10;
     int r=0;
     for(int i=1;i<=n;i++){
          r=r+(fact(i)/pow(i,i));
     }
     printf("result is: %d\n",r);
}