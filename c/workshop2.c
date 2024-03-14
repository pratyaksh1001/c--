#include <stdio.h>

int main(){
     int n;
     scanf("%d",&n);//n=153
     int s=n;//s=153
     int f=0;//f=0
     while(n>0){
          f=f+((n%10)*(n%10)*(n%10));
          n/=10;
     }
     if(s==f){
          printf("%d is n\n%d is f\n%d is s",n,f,s);
     }
}