#include <iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=n;i>=1;i--){
        f*=i;
    }
    return f;
}
int ncr(int n,int r){
    int c=fact(n)/(fact(n-r)*fact(r));
    return c;
}

int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<ncr(a,b);

}