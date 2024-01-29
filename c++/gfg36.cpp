/*
Given an unsorted array arr[] of n positive integers. Find the number of triangles that can be formed with three different array elements as lengths of three sides of triangles. 
*/
#include <iostream>
#include <chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=13;
    int arr[]={4,7,6,5,2,2,3,0,9,11,17,32,67};
    int c=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i+1;k<n;k++){
                if(k>j && j>i ){
                    c++;
                }
            }
        }
    }
    cout<<c<<" ";

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}