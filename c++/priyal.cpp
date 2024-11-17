#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    s[0]-=32;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            s[i+1]-=32;
        }
    }
    cout<<s<<endl;
}