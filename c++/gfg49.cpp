#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n=10;
    int arr[n]={7,3,6,5,1,9,0,6,5,4};
    int k=17;
    int s=0;
    sort(arr,arr+n);
    for(int i=0;i<n-5;i++){
        for(int j=i;j<=i+3;j++){
            s+=arr[j];
        }
        if(s==k){
            cout<<"true"<<endl;
        }
        else{
            //cout<<"false"<<endl;
        }
        s=0;
    }
}