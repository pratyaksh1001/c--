#include <stdio.h>

int main(){
     int n=6;
     for(int i=1;i<=n;i++){
          for(int j=1;j<=6;j++){
               printf("%d ",i*j);
          }
          printf("\n");
     }
}