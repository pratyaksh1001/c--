#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    string digits;
    cout<<"enter the string: ";
    cin>>digits;
    string arr[11][4]={
        {" "},
        {},
        {},
        {"a","b","c"},
        {"d","e","f"},
        {"g","h","i"},
        {"j","k","l"},
        {"m","n","o"},
        {"p","q","r","s"},
        {"t","u","v"},
        {"w","x","y","z"},
    };
    int s=digits.length();
    for(int i=0;i<s;i++){
        int x=stoi(digits.substr(i,1));
        
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}