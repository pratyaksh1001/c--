#include <iostream>
using namespace std;

bool check(int n){
    int f=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            f=false;
        }
    }
    return f;
}
int main(){
    int x;
    cin>>x;
    int r=0;
    while(x>0){
        if(!check(x%10)){
            r+=x%10;
        }
        x/=10;
    }
    cout<<r;
}