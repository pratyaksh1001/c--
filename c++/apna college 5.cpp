//printing fibonacci series

#include <iostream>
using namespace std;

int main(){
    int a1=0;
    int a2=1;
    int a3;
    cout<<a1<<endl<<a2<<endl;
    for(int i=0;i<100;i++){
        a3=a1+a2;
        a1=a2;
        a2=a3;
        cout<<a3<<endl;
    }
}