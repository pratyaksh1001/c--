#include <iostream>
using namespace std;

int main(){
    int n=10;
    int arr[n]={6,1,6,5,9,8,2,3,1,9};
    int l[n]={0};
    int r[n]={0};
    int soln[n]={0};
    int ml=0;
    int mr=0;
    int water=0;
    for(int i=0;i<n;i++){
        if(arr[i]>ml){
            ml=arr[i];
        }
        l[i]=ml;
    }
    for(int j=n-1;j>=0;j--){
        if(arr[j]>mr){
            mr=arr[j];
        }
        r[j]=mr;
    }
    for(int i=0;i<n;i++){
        soln[i]=(min(l[i],r[i])-arr[i]);
    }
    for(int k=0;k<n;k++){
        cout<<soln[k]<<" ";
        water+=soln[k];
    }
    cout<<endl<<water<<endl;
}