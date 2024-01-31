#include <iostream>
using namespace std;

int merge(int arr,int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int a[n1];
    int b[n2];
    
}

int mergesort(int arr[],int n,int low,int high){
    if(high>low){
        int mid=(high+low)/2;
        mergesort(arr,n,mid+1,high);
        mergesort(arr,n,low,mid);
    }
}

int main(){
    int n=10;
    int arr[10]={5,4,3,7,8,9,1,2,3,0};
}