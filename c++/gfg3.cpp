/*Given an array arr[] denoting heights of N towers and a positive integer K.

For each tower, you must perform exactly one of the following operations exactly once.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[10]={6,4,9,3,7,10,9,9,1,3};
    int n=10;
    int k=2;
    sort(arr,arr+n);
    for(int i=0;i<n/2;i++){
        arr[i]+=k;
    }
    for(int j=n/2+1;j<n;j++){
        arr[j]-=k;
    }
    int l=0;
    int r=n-1;
    int min=10000;
    do
    {
        {
        if(arr[r]-arr[l]<min && min>=0){
            min=arr[r]-arr[l];
        }
        //r--;
        l++;
    }
    } while (l<r);
    
    
    cout<<min;
}