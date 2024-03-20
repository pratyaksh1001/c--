#include <stdio.h>

int main(){
     int arr[8]={5,7,8,9,9,6,5,4};
     int n=8;
     for(int i=0;i<n;i++){
          printf("%d ",*(arr+i));
     }
     printf("\n");
}