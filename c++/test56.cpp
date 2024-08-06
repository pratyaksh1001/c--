#include <iostream>
using namespace std;

int main(){
    string s="(hello)";
    int i=0;
    int j=s.size()-1;
    while(i<=j){
        if(s[i]=='('){
            if(s[j]==')'){
                for(int k=i;k<=j;k++){
                    char t=s[k];
                    s[k]=s[j-k];
                    s[j-k]=t;
                }
            }
            j--;
        }
        i++;
    }
    cout<<s<<endl;

}