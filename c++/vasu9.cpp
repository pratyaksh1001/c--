#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    try{
        if(n<0){
            throw runtime_error("negative number");
        }
        if(n%2==0){
            cout<<"true"<<endl;
        }
        else{
            throw runtime_error("odd number");
        }
        
    }
    catch(exception &e){
        cout<<e.what()<<endl;
    }
}