#include <iostream>
using namespace std;
//LCM
int main(){
    int x=10;
    int y=640;
    int r=x*y;
    int c=min(x,y);
    int m=1000000;
    for(int i=c;i<r;i++){
        if(r%i==0){
            m=i;
        }
    }
    cout<<"the LCM is:"<<m;
}