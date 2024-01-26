#include <iostream>
#include <string>
using namespace std;

//wap to convert upper cases to lower
int main(){
    string a="UYRIBV JUYTUGYIUHBJGVHCFiyuTDCXCGKJHUiogudtrxtYUIHNBLUTiyrCT";
    for(int i=0;i<a.size();i++){
        if(a[i]<='Z' && a[i]>='A'){
            a[i]+=32;
        }
    }
    cout<<a;
}