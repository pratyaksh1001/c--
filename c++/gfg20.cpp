/*

A top secret message containing letters from A-Z is being encoded to numbers using the following mapping:
'A' -> 1
'B' -> 2
'Z' -> 26

*/


#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    string s="12345";
    int x=0;
    for(int i=0;i<s.size();i++){
        string s2="";
        int f=0;
        for(int j=1;j<=2;j++){
            s2=s.substr(i,j);
            if(stoi(s2)<=26 && stoi(s2)>0){
                continue;
            }
            else{
                f++;
            }
        }
        if(f==0){
            x++;
        }
    }
    cout<<x<<"\n";

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}