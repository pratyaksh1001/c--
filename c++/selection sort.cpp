#include <iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n]={0,2,3,7,100,9};

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}