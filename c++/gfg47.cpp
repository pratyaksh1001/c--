#include <iostream>
#include <chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[n]={6,1,2,9,8,4,5,2,0,10};
    int k=3;
    sort(arr,arr+n);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    int mid=n/2;
    for(int i=0;i<n;i++){
        if(i<=mid){
            arr[i]=arr[i]+k;
        }
        else{
            arr[i]=arr[i]-k;
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}