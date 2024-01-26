//wap to print fibonacci series
#include <iostream>
using namespace std;

int main(){
    int t1=0;
    int t2=1;
    int t3;
    int c=0;
    cout<<"0 "<<"1 ";
    while(c<20){
        t3=t1+t2;
        t1=t2;
        t2=t3;
        c++;
        cout<<t3<<" ";
    }
}