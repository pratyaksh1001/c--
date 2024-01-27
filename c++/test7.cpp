#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the first number: ";
    cin>>a;
    int b;
    cout<<"enter the second number: ";
    cin>>b;
    char s;
    cout<<"enter the sign: ";
    cin>>s;

    switch (s)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    
    default:
        cout<<"enter a proper sign";
        break;
    }
}





//calculator using switch case
//leap year using else-if
//study about continue keyword