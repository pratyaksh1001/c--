#include <iostream>
using namespace std;
//HCF
int main(){
    int x=10;
    int y=22;
    
    int m=1;
    int f=min(x,y);
    for(int i=1;i<=f;i++){
        if(x%i==0 && y%i==0){
            m=i;
        }
    }
    cout<<"the HCF is:"<<m;
}