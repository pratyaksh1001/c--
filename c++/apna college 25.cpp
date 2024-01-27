#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//the ascii value of lower case is 32 more than that of upper case
//wap to capitalize entire string
int main(){
    string a="agwcxsduDTRfuknbhgvTRSYTtbnlNUYTyxvb";
    cout<<'A'-'a'<<"\n";
    for(int i=0;i<a.size();i++){
        if(a[i]<='z' && a[i]>='a'){
            a[i]-=32;
        }
        else{
            a[i]=a[i];
        }
    }
    cout<<a;
}