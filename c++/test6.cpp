#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the starting year: ";
    cin>>a;
    int b;
    cout<<"enter the end year: ";
    cin>>b;
    for(int i=a;i<b;i++){
        if(i%4==0){
            if(i%100==0){
                if(i%400==0){
                    cout<<i<<endl;
                }
            }
            else{
                cout<<i<<endl;
            }
        }
    }
}