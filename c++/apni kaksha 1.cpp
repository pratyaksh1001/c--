#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;
    int flag=0;
    for(int i=2;a<i;i++){
        if(a%i==0){
            cout<<"the number is not prime"<<endl;
            flag=1;
            break;
        }
    if(flag==0){
        cout<<"the number is prime"<<endl;
    }
    }
}