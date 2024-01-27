#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string a="879566781";
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    cout<<a<<endl;
    float b=stoi(a);
    cout<<b/100000000<<endl;
}