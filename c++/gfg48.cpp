#include <iostream>
using namespace std;

int main(){
    int n=10;
    int arr[n]={8,7,5,3,4,46,7,2,0,10};
    int m=0;
    for(int i=0;i<n;i++){
        if(m<arr[i]){
            m=arr[i];
        }
    }
    int s=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=m){
            s+=arr[i];
        }
    }
    if(s==m){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}