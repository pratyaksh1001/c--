//wap to reverse a string using recursion
#include <iostream>
#include <string>
using namespace std;

string rev(string s,string r){
    if(s==""){
        return r;
    }
    else{
        string t=s.substr(0,s.length()-2);
        r+=s[(s.length())-1];
        rev(t,r);
        cout<<r;
    }
}

int main(){
    string s="hello";
    string r="";
    cout<<rev(s,r);
    cout<<r;
}
//to be done