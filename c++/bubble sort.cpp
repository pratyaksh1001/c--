#include <iostream>
using namespace std;

int main(){
    int n=20;
    int arr[n]={400,2,4,5,7,8,9,0,-2,7,6,4,332,4,6,78,5,56,67,7,9,0,-100};
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}