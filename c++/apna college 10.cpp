#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number of elements: ";
    cin>>a;
    int l[a];
    for(int i=0;i<a;i++){
        int x;
        cout<<"enter the number you ewant to add: ";
        cin>>x;
        l[i]=x;
    }
    int f;
    cout<<"enter the number you want to search: ";
    cin>>f;
    for(int j=0;j<a;j++){

        if(l[j]==f){
            cout<<"the index of the number is: "<<j;
        };
    }
}