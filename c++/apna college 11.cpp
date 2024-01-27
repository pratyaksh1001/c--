#include <iostream>
using namespace std;


int binsearch(int arr[],int size,int key){
    int low=0;
    int high=size-1;
    int mid=(high+low)/2;
    while(true){
        if(key==arr[mid]){
            return mid;
            break;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else if(key<arr[mid]){
            high=mid-1;
            }
    }
}


int main(){
    int l[10000];
    for(int i=0;i<10000;i++){
        l[i]=i;
    }
    cout<<binsearch(l,10000,3000);
}