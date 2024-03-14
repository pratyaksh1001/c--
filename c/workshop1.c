#include <stdio.h>

int main(){
     int n=10;
     int t1=0; 
     int t2=1;
     int t3;
     while(n>0){
          t3=t1+t2;
          t1=t2;
          t2=t3;
          printf("%d\n",t3);
          n--;
     }
}