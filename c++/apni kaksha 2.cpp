#include <iostream>
using namespace std;

int main(){
    int n;
    int rev=0;
    cout<<"enter the number: ";
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        rev=rev*10 + lastdigit;
        n=n/10;
        cout<<rev<<endl;
    }
    cout<<rev;
}