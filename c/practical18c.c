#include <stdio.h>

int main(){
     int n=10;
     int arr[100]={1,2,3,4,5,6,7,8,9,10};
     int arr2[100];
     int i2;
     int x;
     printf("enter the index: ");
     scanf("%d",&i2);
     n--;
     for(int i=0;i<n;i++){
          if(i<i2){
               arr2[i]=arr[i];
          }
          else if(i>=i2){
               arr2[i]=arr[i+1];
          }
     }
     for(int i=0;i<n;i++){
          printf("%d ",arr2[i]);
     }
}