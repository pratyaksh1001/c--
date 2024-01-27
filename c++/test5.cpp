#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<endl<<"enter the second number: ";
    cin>>b;
    cout<<endl<<"enter the third number: ";
    cin>>c;
    int r=a<b?a<c?a:c:b<c?b:c;
    cout<<"the smallest number is: "<<r;
//the program finds the smallest number among 3 
}