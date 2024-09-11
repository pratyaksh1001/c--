#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[50];
    int r=0;
    int t1=0;
    int t2=1;
    int t3=0;
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<50;i++){
        t3=t1+t2;
        arr[i]=t3;
        t1=t2;
        t2=t3;
    }
    int n;
    cout<<"enter the number of balloons: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cout<<"enter the index of balloon: ";
        cin>>k;
        r+=arr[k];
        arr[k]=0;
    }
    cout<<"result is: "<<r<<endl;
}