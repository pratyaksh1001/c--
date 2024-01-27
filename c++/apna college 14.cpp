//sorting an arrray using selection sort
#include <iostream>
using namespace std;

int main(){
    int arr[20]={6,8,9,0,76,42,1,2,4,6,7,8,9,0,76,9,8,7,6545,5};
    for(int i=0;i<20-1;i++){
        for(int j=i+1;j<20;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int x=0;x<20;x++){
        cout<<arr[x]<<" ";
    }
}