#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int x=100000;
    while(n>0){
        if(n%x==n){
            x=x/10;
        }
        else{
            switch(n%x){
                case 0:
                cout<<"zero"<<" ";
                case 1:
                cout<<"one"<<" ";
                case 2:
                cout<<"two"<<" ";
                case 3:
                cout<<"three"<<" ";
                case 4:
                cout<<"four"<<" ";
                case 5:
                cout<<"five"<<" ";
                case 6:
                cout<<"six"<<" ";
                case 7:
                cout<<"seven"<<" ";
                case 8:
                cout<<"eight"<<" ";
                case 9:
                cout<<"nine"<<" ";
            }
            n=n/10;
            x=x/10;
        }
    }
}