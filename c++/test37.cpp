//wap to find sum of n natural numbers

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number till which you want the sum: ";
    cin>>n;
    int r=0;
    while(n>0){
        r+=n;
        n--;
    }
    cout<<r;
}