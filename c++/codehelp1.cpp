#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    string s="aB CDc bA";
    int i=0;
    int j=s.length()-1;
    int f=0;
    for(int k=0;k<s.length()-1;k++){
        if(s[k]==' '){
            if(k<s.length()-1){
                s[k]=s[k+1];
                
            }
            else{
                continue;
            }
        }
        if(s[k]>='A' && s[k]<='Z'){
            s[k]+=32;
        }
    }
    s=s.substr(0,s.length()-1);
    while(i<=j){
        if(s[i]!=s[j]){
            f++;
            break;
        }
        else{
            i++;
            j--;
        }
    }
    if(f==0){
        cout<<s<<" is a palindrome"<<endl;
    }
    else{
        cout<<s<<" is not a palindrome"<<endl;
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
} 