//hanoi tower

#include <iostream>
using namespace std;

int main(){
    int arr[20]={2,8,7,6,5,3,4,9,0,1,12,1000101,11,19,56,34,23,89,12,200};
    int n=20;
    int arr2[20];

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<endl;
    }
}