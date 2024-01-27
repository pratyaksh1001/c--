//wap to print the number in words 
// 456 -> four five six

#include <iostream>
using namespace std;

int f1(int x){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
        if(x>0){
            int g=x%10;
            cout<<arr[g]<<" ";
            x=x/10;
            f1(x);
        }
        else{
            return 0;
        }
}

int main(){
    //wap for 121 to one two one
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int f=0;
    while(n>0){
        int t=n%10;
        n=n/10;
        f=f*10;
        f=f+t;
    }
    f1(f);
}