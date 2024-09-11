#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int n=s.length();
    int r=0;
    for(int i=0;i<n;i++){
        r+=(s[i]-'0')*(pow(2,i));
    }
    cout<<r<<endl;
}