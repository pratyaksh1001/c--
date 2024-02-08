#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    string s="facfgyirgfgwwwww1wwwwwno8qqwqqyc";
    int x=s.size();
    int m=0;
    string r="";
    for(int i=0;i<x;i++){
        for(int j=i;j<x;j++){
            string s2;
            string s3;
            for(int k=i;k<=j;k++){
                s2+=s[k];
            }
            for(int l=j;l>=i;l--){
                s3+=s[l];
            }
            if(s2==s3 && s2.size()>m){
                m=s2.size();
                r=s2;
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



