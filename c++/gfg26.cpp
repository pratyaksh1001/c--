#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=5;
    int m=5;
    int arr[n][m]={
        {0,0,1,1,1},
        {0,0,0,1,1},
        {0,0,1,1,1},
        {1,1,1,1,1},
        {0,0,0,0,0}
    };
    int x=0;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=m-1;j>=0;j--){
            if(arr[i][j]==1){
                c++;
            }
        }
        if(x<c){
            x=c;
        }
    }
    cout<<x;


cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}