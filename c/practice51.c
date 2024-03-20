#include <stdio.h>
#include <string.h>
int search(int arr[],int n,int key){
     for(int i=0;i<n;i++){
          if(arr[i]==key){
               return i;
          }
     }
}
int avg(int arr[],int n){
     int s=0;
     for(int i=0;i<n;i++){
          s+=arr[i];
     }
     return (s/n);
}

int second(int arr[],int n){
     int r1=0;
     int r2=0;
     int t1=0;
     for(int i=0;i<n;i++){
          if(arr[i]>=r1){
               r1=arr[i];
               t1=i;
          }
     }
     for(int j=0;j<n;j++){
          if(j!=t1){
               if(arr[j]>r2){
                    r2=arr[j];
               }
          }
     }
     return r2;
}

int left(int arr[],int n){
     for(int i=0;i<n;i++){
          int r=arr[i];
          while(r>10){
               r/=10;
          }
          printf("%d ",r);
     }
}

int rightday(int arr[],int n){
     for(int i=0;i<n;i++){
          int r=arr[i]%10;
          switch (r)
          {
          case 1:
               printf("Monday\n");
               break;
          case 2:
               printf("Tuesday\n");
               break;
          case 3:
               printf("Wednesday\n");
               break;
          case 4:
               printf("Thursday\n");
               break;
          case 5:
               printf("Friday\n");
               break;
          case 6:
               printf("Saturday\n");
               break;
          case 7:
               printf("Sunday\n");
               break;
          default:
               printf("Invalid\n");
               break;
          }
     }
}

int main(){
     int n=10;
     int arr[10]={66,799,8469,7321,57564,3904,7643,98544,6659,67457};
     printf("the average of the array is: %d\n",avg(arr,n));
     printf("the secod greatest integer is: %d\n",second(arr,n));
     printf("the index of %d is: %d\n",69,search(arr,n,69));
     left(arr,n);
     printf("\n");
     rightday(arr,n);
}