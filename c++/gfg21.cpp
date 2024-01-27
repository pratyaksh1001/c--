//find the index of greatest number in an array
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[n]={2,3,4,56,7,8,9,5,4,3};
    int k=0;
    int m=0;
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
            k=i;
        }
    }
    cout<<k<<" ";

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}