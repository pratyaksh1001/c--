#include <iostream>
using namespace std;

int main(){
    int n=20;
    int arr[n]={1,8,6,4,45,4,6,9,45,54,3,5,6,8,9,8,6,8,23,67};
    int arr2[n]={0};
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                if(arr[j]>arr[i]){
                    break;
                }
                else{
                    arr2[c]=arr[i];
                    c++;

                }
            }
            else if(j==i+1){
                if(arr[i]>arr[j]){
                    arr2[c]=arr[i];
                    c++;

                }
            }
            else if(j==0 || j==n-1){
                arr2[c]=arr[j];
                c++;
            }
        }
    }
    for(int k=0;k<c;k++){
        cout<<arr2[k]<<" ";
    }
}