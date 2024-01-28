//print the two numbers whose sum is divisible by given number
#include <iostream>
#include<chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int x=5;
    int arr[10]={1,5,6,7,8,9,3,2,6,10};
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%x==0){
            printf("%d and %d\n",arr[i],arr[j]);
            }
        }
    }
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}