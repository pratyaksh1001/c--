#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n=5;
    int arr[10]={500,23,35,1,3,-100,1,2,4,5};
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]>=0 && arr[i+1]-arr[i]>1){
            for(int j=arr[i];j<arr[i+1];j++){
                cout<<arr[i]+1;
                break;
            }
            break;
        }
    }
} 