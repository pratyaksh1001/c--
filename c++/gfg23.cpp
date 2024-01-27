/*
The cost of stock on each day is given in an array A[] of size N. Find all the segments of days on which you buy and sell the stock such that the sum of difference between sell and buy prices is maximized. Each segment consists of indexes of two elements, first is index of day on which you buy stock and second is index of day on which you sell stock.
*/

#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[n]={1,5,6,4,3,2,9,5,2,3};
    int b=0;
    int s=0;
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]<arr[j]){
                if(arr[j]-arr[i]>p){
                    p=arr[j]-arr[i];
                    b=i;
                    s=j;
                }
            }
        }
    }
    cout<<b<<" "<<s<<" "<<p<<endl;

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}