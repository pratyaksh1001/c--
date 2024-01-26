//binary to decimal
#include <iostream>
using namespace std;

int pow(int n,int p){
    int r=1;
    for(int i=1;i<=p;i++){
        r=r*n;
    }
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int c=0;
    int x=1;
    while(n>1){
        c+=(pow((n%10),x));
        x++;
        n=n/10;
    }
    cout<<c;
}