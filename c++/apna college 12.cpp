#include <iostream>
using namespace std;

int bin(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}


int main(){
    int a[]={1,2,3,4,5,6,7,10,12,14,16,20,24,28};
    int s=14;
    int k=24;
    int x=bin(a,s,k);
    cout<<x;
}