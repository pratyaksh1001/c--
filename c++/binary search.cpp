#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binsearch(int arr[],int n,int key,int low,int high){
    int mid=(low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else{
        if(arr[mid]>key){
            high=mid-1;
            binsearch(arr,n,key,low,high);
        }
        else if(arr[mid]<key){
            low=mid+1;
            binsearch(arr,n,key,low,high);
        }
    }
}

int main(){
    int n=20;
    int arr[20]={1,8,9,0,6,5,4,3,2,1,-1,-5,-6,-3,-4,6,-7,-3,0,-1};
    sort(arr,arr+n);
    int key=6;
    cout<<"the index is: "<<binsearch(arr,n,key,0,n-1);
}
//2 sum problem for x and 0 
//binary search
//linear search
//triplet sum=x