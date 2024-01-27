//finding the HCF of 2 numbers
#include <iostream>
using namespace std;

int main(){
    int a=101,b=93;
    //cin>>a;
    //cin>>b;
    int t=a;
    while(t>0){
        a=b;
        b=t;
        t=a%b;
    }
    cout<<b<<" is the HCF"<<endl;
}