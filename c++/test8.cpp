#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the year: ";
    cin>>a;
    if(a%100==0 && a%400==0){
        cout<<a<<" is a leap year";
    }
    else if(a%4==0 && a%100!=0){
        cout<<a<<" is a leap year";
    }
    else{
        cout<<"the year isn't a leap year";
    }
}