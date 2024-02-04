//print the 3 numbers from the array whose sum is equal to th given element 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=20;
    int arr[n]={1,8,9,0,6,5,4,3,2,1,-1,-5,-6,-3,-4,6,-7,-3,0,-1};
    sort(arr,arr+n);
    int x=-1;
    int i=0;  
    int j=n-1;
    int k=n/2;
    while(true){
        if(arr[i]+arr[j]+arr[k]>x){
            if(j!=k){
                j--;
            }
            else if(j==k){
                k--; 
            }
        }
        else if(arr[i]+arr[j]+arr[k]<x){
            i++;
        }
        else if(arr[i]+arr[j]+arr[k]==x){
            cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<x;
            break;
        }
    }
}