#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        n=n*fact(n-1);
        return n;
    }
}
int main(){
    int x;
    cin>>x;
    cout<<fact(x);
}