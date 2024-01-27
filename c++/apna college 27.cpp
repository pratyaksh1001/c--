#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    //we can use below method to capitalize or convert to lower cas too
    //we can use s.begin to get starting of string and s.end to get the end of string
    string s="gwu38gufgderyujhgf";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    //peerforming the opposite
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
}