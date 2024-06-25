#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int c=0;
    while(n>0){
        if(n%10!=x){
            c++;
        }
        n/=10;
    }
    cout<<c;
}