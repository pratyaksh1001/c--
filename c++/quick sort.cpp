#include <iostream>
using namespace std;

int quick(int arr[],int n,int s,int e,int p){
    int i=s;
    int j=e;
    if(e==s){
        return 0;
    }
    while(i>=j){
        if(arr[j]<arr[p]){
            int t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;
            i++;
        }
        if(arr[i]>arr[p]){
            int t2=arr[j];
            arr[j]=arr[i];
            arr[j]=t2;
            j--;
        }
    }
    quick(arr,n,s,p-1,s);
    quick(arr,n,p+1,e,p+1);
}
int main(){
    int arr[20]={1,2,8,9,5,6,3,4,8,90,34,12,45,67,89,45,13,63,91,80};
    int n=20;
    quick(arr,n,0,n-1,0);
    for(int f=0;f<n;f++){
        cout<<arr[f]<<" ";
    }
}