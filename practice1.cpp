#include <iostream>
#include <string>
using namespace std;
int main(){
    int amount=5430;
    int notes[5]={0};
    int value[5]={10,20,50,100,500};
    for(int i=4;i>=0;i--){
        notes[i]=amount/value[i];
        amount=amount%value[i];
    }
    for(int i=0;i<5;i++){
        cout<<value[i]<<" - "<<notes[i]<<endl;
    }
}