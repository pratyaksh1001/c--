#include <iostream>
using namespace std;

int main(){
    int a=0;
    int i1=0;
    int i2=1;
    int i3;
    int x;
    cout<<"enter the number of terms you want: ";
    cin>>x;
    cout<<0<<endl<<1<<endl;
    while(a<x-2){
        a++;
        i3=i1+i2;
        cout<<i3<<endl;
        
        i1=i2;
        i2=i3;
    }
}
//write a program which prints all the divisors of a number