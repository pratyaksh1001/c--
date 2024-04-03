#include <bits/stdc++.h>
using namespace std;

int main(){
     int n=10;
     int arr[n]={1,0,2,1,1,1,2,0,0,2};
     for(int k=n-1;k>=0;k--){
          for(int i=0;i<n-1;i++){
          if(arr[i]>arr[i+1]){
               int t=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=t;
          }
     }
     }
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}