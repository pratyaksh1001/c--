//replace pi with 3.14 in a string

#include <iostream>
#include <string>
using namespace std;

int check(string s){
    string r;
    if(s==""){
        return 0;
    }
    if(s.substr(0,2)=="pi"){
        cout<<"3.14";
        r=s.substr(2,s.length()-2);
        }
    else{
        cout<<s.substr(0,1);
        r=s.substr(1,s.length()-1);
    }
    
    check(r);
}

int main(){
    string s="pidgnhjpifgbf";
    cout<<endl;
    check(s);
    cout<<endl<<endl;
}