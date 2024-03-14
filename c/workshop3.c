#include <stdio.h>

int main(){
     int n=10;
     while(n>0){
          int i=n;
          while(i>0){
               printf("*");
               i--;
          }
          printf("\n");
          n--;
     }
}