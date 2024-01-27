#include <iostream>
using namespace std;

int term(int n){
    if(n==0 || n==1){
        return n;
    } 
    else{
        n=term(n-1)+term(n-2);
        return n;
    }
}
int main(){
    int x;
    cin>>x;
    cout<<term(x-1);
}