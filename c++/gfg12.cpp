/*
Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.
*/
#include <iostream>
using namespace std;

int main(){
    int n=10;
    int arr[n]={1,-1,3,4,-5,-3,-6,9,5,-3};
    int k=2;
    for(int i=0;i<n-1;i++){
        int f=0;
        int s=0;
        for(int x=i;x<i+k;x++){
            if(arr[x]<0){
                cout<<arr[x]<<" ";
                f++;
            }
        }
        if(f==0){
            cout<<0<<" ";
        }
    }
}