#include <stdio.h>


int main(){
     int n=10;
     int arr[100]={1,2,3,4,5,6,7,8,9,10};
     int arr2[100];
     int i2;
     int x;
     printf("enter the index: ");
     scanf("%d",&i2);
     printf("enter the number: ");
     scanf("%d",&x);
     n++;
     for(int i=0;i<n;i++){
          if(i<i2){
               arr2[i]=arr[i];
          }
          else if(i2==i){
               arr2[i+1]=arr[i];
               arr2[i]=x;
          }
          else if(i>i2){
               arr2[i+1]=arr[i];
          }
     }
     
     for(int i=0;i<n;i++){
          printf("%d\n",arr2[i]);
     }
}