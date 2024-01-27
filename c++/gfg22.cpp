/*
Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.
*/

#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[n]={3,4,6,2,1,9,4,6,8,10};
    int x=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                
                if(arr[k]<arr[k+1]){
                    //cout<<arr[k]<<" ";
                    if(x<(j-1)){
                    x=j-i;
                }
                }
                else{
                    break;
                }
            }
            
        }
    }
    cout<<x<<endl;


cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}