#include <iostream>
using namespace std;

int main(){
    int arr[]={2,5,4,2,7,8,0,34,267,2,3,8,9};
    int s=13;
    for(int l=0;l<13;l++){
        cout<<arr[l]<<" ";
    }
    cout<<'\n';
    for(int i=0;i<12;i++){
        for(int j=i+1;j<s;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int k=0;k<13;k++){
        cout<<arr[k]<<" ";
    }
}