/*
Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences.
Note: X and Y can have both uppercase and lowercase letters.
*/
#include <iostream>
#include <chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    string s1="asdfgc";
    string s2="asdqwe";
    string f=s1+s2;
    sort(f.begin(),f.end());
    cout<<f;
    string r="";
    for(int i=0;i<f.size();i++){
        int j=i;
        while(true){
            if(f[i]!=f[j]){

                break;
            }
            else{
                j++;
            }
        }
        r[i]=f[j];
    }
    cout<<r;


cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;    
}