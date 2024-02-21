#include <iostream>
#include <chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[10]={2,7,6,4,1,3,8,9,0,10};
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(j>i){
        cout<<arr[i]<<" "<<arr[j]<<" ";
        i++;
        j--;
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}