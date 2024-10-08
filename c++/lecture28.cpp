#include <bits/stdc++.h>
using namespace std;

class computer{
    public:
    int ram;
    int cores;
    int storage;
    computer(int r,int c,int s){
        ram=r;
        storage=s;
        cores=c;
    }
};


class desktop: public computer{
    private:
    int form;
    public:
    desktop(int f,int r,int c,int s){
        form=f;
        ram=r;
        storage=s;
        cores=c;
    }
    void display(){
        cout<<form<<endl;
        cout<<ram<<endl;
        cout<<storage<<endl;
        cout<<cores<<endl;
    }
};

class laptop: public computer{
    private:
    int battery;
    public:
    laptop(int b,int r,int c,int s){
        battery=b;
        ram=r;
        storage=s;
        cores=c;
    }
    void display(){
        cout<<battery<<endl;
        cout<<ram<<endl;
        cout<<storage<<endl;
        cout<<cores<<endl;
    }
};

int main(){
    laptop a(1,2,3,4);
    a.display();
}
/*

ambiguity problem -
    it arise when multiple class inherite rfom the same base class
    and are inherited by a derived class

use scope resolution to specify which base class method to call
use virtual inheritance to ensure a single stance of the common base class eliminating ambiguity 

*/