#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;
    int arm=0;
    int r=a;
    while(a>0){
        int temp=pow(a%10,3);
        arm+=temp;
        a=a/10;
    }
    cout<<arm<<endl;
    if(arm==r){
        cout<<"the number is an armstrong number: ";
    }
}