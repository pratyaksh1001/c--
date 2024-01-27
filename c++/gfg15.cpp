//replacing first repeated product by "#"

#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();


int main(){
    string s="hbdskjvritffgasndsvgryvuu";
    int n=s.size();
    int i=0;
    int j=n-1;
    string r="";
    int f=0;
    //int r=0;
    while(true){
        if(s[i]==s[j] && f==0){
            r+="#";
            i++;
            f++;
        }
        else{
            j--;
            r+=s[i];
            i++;
        }
        if(r.size()==n){
            break;
        }
    }
    cout<<r;



cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}