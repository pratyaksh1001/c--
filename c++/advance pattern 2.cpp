#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}