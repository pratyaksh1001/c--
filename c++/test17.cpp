#include <iostream>
using namespace std;

int main(){
    int l[5];
    int c=0;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        l[i]=a;
    } 
    for(int j=0;j<5;j++){
        if(c<l[j]){
            c=l[j];
        }
    }
    cout<<c<<"is the largest number";
}