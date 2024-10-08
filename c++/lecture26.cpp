/*
create a program to create help user a task list the program should have  -

add task 
remove task 
start task 
stop task 
display all tasks
show help - display all commands
clear task
use function pointer for this and maintain history
daning pointer refer to a pointer 

void pointer is a pointer that has not been initialized toa valid memory address  
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='z'){
            s[i]='a';
        }
        else if(s[i]=='Z'){
            s[i]='A'; 
        }
        else if((s[i]>='b' || s[i]>='B') && (s[i]<='y' || s[i]<='Y')){
            s[i]+=1;
        }
    }
    cout<<s;
}