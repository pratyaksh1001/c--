#include <iostream>

#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[n]={6,7,8,4,3,2,6,7,5,8};
    int x=7;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            c++;
        }
    }
    cout<<c<<endl;


cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;    
}