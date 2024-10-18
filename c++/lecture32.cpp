#include <bits/stdc++.h>
using namespace std;

class staff{
    public:
    virtual void perform()=0;

    staff(){}
    ~staff(){
        cout<<"staff destroyed"<<endl;
    };
};

class teacher:public staff{
    
    public:
    teacher():staff(){

    }
    void perform()override{
        cout<<"teacher is performing"<<endl;
    }
};


int main(){
    staff* o1=new teacher();
    o1->perform();
    
}