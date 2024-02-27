#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    string s1="aabcc";
    string s2="dbbca";
    string r="aadbbcbcac";
    int i=0;
    int j=0;
    int k=0;
    int f=0;
    while(k<r.length()){
        if(r[k]==s1[i]){
            i++;
            k++;
        }
        else if(r[k]==s2[j]){
            k++;
            j++;
        }
        else if(r[k]!=s1[i] && r[k]!=s2[j]){
            f++;
        }
    }
    if(f==0){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}