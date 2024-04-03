#include <bits/stdc++.h>
using namespace std;

int main(){
     int n=10;
     int arr[n]={6,7,8,9,4,5,6,7,2,3};
     for(int i=0;i<n;i++){
          int c=0;
          for(int j=0;j<n;j++){
               if(arr[i]==arr[j] && i!=j){
                    c++;
               }
          }
          if(c>0){
               cout<<arr[i]<<endl;
               arr[i]=-1;
          }
     }
}