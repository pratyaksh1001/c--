#include <iostream>
#include <algorithm>
using namespace std;

int getbit(int n,int p){
    if((1<<p & n)!=0){
        return 1;
    }
}

int setbit(int n,int p){
    int r=(1<<p | n);
    if(1<<p | n){
        return r;
    }
}

int clearbit(int n,int p){
    int r=(~(1<<p))&n;
    return r;
}

int updatebit(int n,int p){
    int r=(((~(1<<p))&n)|1<<p);
    return r;
}

int main(){
    int n=5;
    int p=1;
    cout<<getbit(n,p)<<endl;
    cout<<setbit(n,p)<<endl;
    cout<<clearbit(n,p)<<endl;
    cout<<updatebit(n,0)<<endl;
}