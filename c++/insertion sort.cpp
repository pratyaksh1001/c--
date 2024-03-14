#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={3,2,344,55,78};
    for(int x=0;x<n;x++){
        for(int i=0;i<n;i++){
        int j=i;
        while(arr[j]>arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
            j++;
        }
    }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}