#include <stdio.h>

int main(){
     int n=22;
     int arr[100]={34,45,6,7,9,0,9,8,7,6,5,4,3,32,2,2,3,5,6,8,1001,0,1002};
     printf("enter the number you want to search: ");
     int x;
     scanf("%d",&x);
     for(int i=0;i<n;i++){
          if(arr[i]==x){
               printf("the element is at: %d\n",i);
               break;
          }
     }
;}