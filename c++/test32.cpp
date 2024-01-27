//josephus problem

#include <iostream>
using namespace std;

int kill(int arr[],int n,int k,int x){
    if(n==1){
        return arr[0];
    }
    int p=(x+k-1)%n;
    int arr2[n-1]={0};

    for(int i=0;i<n-1;i++){
        if(i<p){
            arr2[i]=arr[i];
        }
        else if(i>=p){
            arr2[i]=arr[i+1];
        }
    }
    x=p;
    for(int j=0;j<n-1;j++){
        cout<<arr2[j]<<" ";
    }
    cout<<endl;
    kill(arr2,n-1,k,x);
}

int main(){
    int arr[20]={1,5,3,4,2,8,9,8,3,5,8,9,3,7,6,2,1,8,0,6};
    int n=20;
    int k=5;
    int s=0;
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the last one alive is: "<<kill(arr,n,k,s);
}