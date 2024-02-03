#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n=10;
    int arr[10]={7,4,5,6,8,5,3,3,7,1};
    int m=1000000;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]-arr[i]<m  && arr[j]-arr[i]>=0){
                m=arr[j]-arr[i];
            }
        }
    }
    cout<<m;
}