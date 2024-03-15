#include <stdio.h>

float power(float n,float p){
     for(int i=1;i<=p;i++){
          n*=n;
     }
     return n;
}

float fact(float n){
     float r=1;
     for(int i=1;i<=n;i++){
          r*=i;
     }
     return r;
}
int main(){
     float n=2;
     float r=0;
     for(int i=1;i<=n;i++){
          r=r+(1/(((fact(i))/(power(i,i)))));
     }
     printf("result is: %f\n",r);
}