#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=4;
    int arr[n][2]={{1,3},{2,6},{8,10},{15,18}};
    int arr2[n][2];
    for(int i=0;i<n-1;i++){
        if(arr[i][1]>arr[i+1][0]){
            
        }
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}