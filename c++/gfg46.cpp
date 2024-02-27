#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline (cin,s);
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            c++;
        }
    }
    s+='.';
    string arr[c+1];
    string arr2[c+1];
    string t="";
    int x=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='.'){
            t+=s[i];
        }
        else if(s[i]=='.' || i==s.length()-1){
            arr[x]=t;
            x++;
            t="";
        }
    }
    
    for(int i=0;i<c+1;i++){
        arr2[i]=arr[c-i];
    }
    for(int j=0;j<c+1;j++){
        cout<<arr2[j]<<".";
    }
}