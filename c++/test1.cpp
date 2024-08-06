#include <iostream>
using namespace std;


int main(){
    int a;
    int d;
    int n;
    cout<<"enter the first term: ";
    cin>>a;
    cout<<"enter the common difference: ";
    cin>>d;
    cout<<"enter the number of terms: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        int term;
        term=a+((i-1)*d);
        cout<<term<<endl;
    }
}