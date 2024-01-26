//wap to find factorial using recursion
#include <iostream>
using namespace std;

int fact(int n){
    if(n>1){
        n=n*(fact(n-1));
    }
    else{
        return n;
    }
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<fact(n);
}