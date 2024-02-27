#include <iostream>
#include <chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();
//remove duplicate from a sorted array
int main(){
    int n=20;
    int arr[n]={6,1,2,9,0,4,3,2,6,7,5,1,2,3,8,9,6,5,4,4};
    int c=0;
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}