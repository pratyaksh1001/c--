#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=0;j<=n-i;j+=2){
                cout<<" ";
            }
            for(int g=1;g<=i;g++){
                cout<<"#";
            }
    cout<<endl;}
    }
    for(int h=n;h>=1;h--){
        if(h%2!=0){
            for(int k=n;k>=h;k-=2){
                cout<<" ";
            }
            for(int f=h;f>=1;f--){
                cout<<"#";
            }
        cout<<endl; }
    }
}