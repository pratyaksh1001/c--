#include <iostream>
#include <chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=20;
    int arr[20]={4,6,7,8,9,6,5,4,3,2,1,7,8,9,0,5,0,3,2,1};
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
            }
        }
        if(c==1){
            cout<<arr[i]<<endl;
        }
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}