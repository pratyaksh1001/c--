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
    int x;
    cout<<"enter the number of rows: ";
    cin>>x;
    for(int i=0;i<=x;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}