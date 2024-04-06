#include <stdio.h>

int summation(int arr[],int n){
     int s=0;
     for(int i=0;i<n;i++){
          s+=arr[i];
     }
     return s;
}

int main(){
     int arr[5]={1,2,3,4,5};
     int r=summation(arr,5);
     printf("%d\n",r);
}