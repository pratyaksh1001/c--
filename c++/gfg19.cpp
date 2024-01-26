#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

string dlt(string s,string s2){
    for(int i=0;i<s.size()-2;i++){
        if(s[i]!=s[i+1]){
            s2+=s[i];
        }
        else{
            i++;
        }
    }
}

int main(){
    string s="hhjhugruighkurgfecccfcfcfgqwyfcwd";
    string s2="";
    dlt(s,s2);
    cout<<s2<<endl;

    
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}