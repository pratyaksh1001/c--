#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=5;
    int arr[5]={20,-111,5,6,2};
    int m=-10000;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int x=0;
            for(int k=i;k<=j;k++){
                x+=arr[k];
            }
            if(x>m){
            m=x;
        }
        }
    }
cout<<m<<endl;
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}