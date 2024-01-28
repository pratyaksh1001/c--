#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[10]={5,6,7,4,3,2,8,9,10,6};
    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
        x+=arr[i];
    }
    for(int j=1;j<n;j++){
        y+=arr[j];
    }
    cout<<max(x,y)<<" ";

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}