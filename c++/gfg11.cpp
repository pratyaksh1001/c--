/*
Given a value V and array coins[] of size M, the task is to make the change for V cents, given that you have an infinite supply of each of coins{coins1, coins2, ..., coinsm} valued coins. Find the minimum number of coins to make the change. If not possible to make change then return -1.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int find(int arr[],int n,int v,int s,int c){
    if(s==v){
        return c;
    }
    else{
        for(int i=n-1;i>=0;i--){
            if(s+arr[i]<=v){
                s+=arr[i];
                cout<<arr[i]<<" ";
                c++;
            }
        }
        find(arr,n,v,s,c);
    }
}

int main(){
    int n=3;
    int arr[n]={25, 10, 5};
    sort(arr,arr+n);
    int v=350;
    int c=0;
    int s=0;
    cout<<endl;
    int r=find(arr,n,v,s,c);  
    cout<<endl<<r<<" coins are used"<<endl<<endl;
}