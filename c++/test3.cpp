#include <iostream>
using namespace std;



int min(int x,int y){
    if(x>y){
        return y;
    }
    else{
        return x;
    }
}

int main(){
    int a;
    int b;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    int result=min(a,b);
    cout<<"the smallest number is: "<<result;
}