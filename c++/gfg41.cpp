//find the max product among subarrays
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[n]={5,-2,3,-4,0,8,-9,0,2,3};
    int m=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int r=1;
            for(int k=i;k<=j;k++){
                r*=arr[k];
            }
            if(r>m){
                m=r;
            }
        }
    }
    cout<<m;
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}