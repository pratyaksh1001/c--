#include <iostream>
using namespace std;

int main(){
    int l[5];
    int c1=0;
    int c2=10000;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        l[i]=a;
    } 
    for(int j=0;j<5;j++){
        if(c1<l[j]){
            c1=l[j];
        }
    }
    for(int k=0;k<5;k++){
        if(c2>l[k]){
            c2=l[k];
        }
    }
    cout<<c1<<" is the largest number"<<endl;
    cout<<c2<<" is the smallest number";
    
}