//two sum problem
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=20;
    int arr[n]={1,8,9,0,6,5,4,3,2,1,-1,-5,-6,-3,-4,6,-7,-3,0,-1};
    sort(arr,arr+n);
    int x=2;
    int i=0;
    int j=n-1;
    while(true){
        if(arr[i]+arr[j]>x){
            j--;
    }
        else if(arr[i]+arr[j]<x){
            i++;
    }
        else if(arr[i]+arr[j]==x){
            cout<<arr[i]<<" and "<<arr[j];
            break;
    }
        else if(j<i){
            cout<<"sum not found";
            break;
    }
    }
    
}