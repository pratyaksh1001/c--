#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=5;
    string arr[n]={"flower","flrvrr","flaeuif","flrrb","fluytr"};
    string f;
    string r;
    for(int i=0;i<arr[0].length();i++){
        f+=arr[0][i];
        for(int j=0;j<n;j++){
            for(int k=0;k<arr[j].length();k++){
                if(f!=arr[j].substr(0,k)){
                    r=f;
                    continue;
                }
                else{
                    continue;
                }
            }
        }
    }
    cout<<r;

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}