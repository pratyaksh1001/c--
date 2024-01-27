/*
Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.
*/
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int  n=10;
    int arr[n]={8,6,4,3,2,8,9,6,4,5};
    int i=0;
    int j=n-1;
    while(true){
        if(arr[i]<arr[j]){
            cout<<i<<" "<<j;
            break;
        }
        else if(i!=j){
            j--;
        }
        else if(i==j){
            i++;
            j=n-1;
        }
    }


cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}