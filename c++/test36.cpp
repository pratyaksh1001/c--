
//wap to find exponent of a number using recursion
#include <iostream>
using namespace std;

int expo(int n,int p){
    if(p>1){
        n=n*expo(n,p-1);
        
}
    else{
        return n;
    }

}

int main(){
    int n;
    int p;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"enter the power: ";
    cin>>p;
    cout<<expo(n,p);
}