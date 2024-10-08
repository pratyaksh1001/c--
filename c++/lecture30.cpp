#include <bits/stdc++.h>
using namespace std;

class employee{
    protected:
    string name;
    public:
    employee(string n){
        name=n;
    }
    virtual double calsal(int a)=0;
    employee(){

    }
    virtual void show()=0;

};

class part:public employee{
    int hour;
    public:
    double calsal(int y) override{
        hour+=y;
    }
    part(string s,int n):employee(s),hour(n){

    }
    void show(){
        cout<<"hourly salary is: 2000"<<endl;
        cout<<"total salary is: "<<hour<<endl;
    }
};

class full: public employee{
    int month;
    string name;
    public:
    double calsal(int b){
        month+=b;
    }
    void show(){
        cout<<"monthly salary is: 100000"<<endl;
        cout<<"total salary is: "<<month<<endl;
    }
    full(string s,int n):employee(s),month(n){}
};

int main(){
    employee* e1=new part("hello world",100000);
    employee* e2=new full("how are you",500000);
    e1->calsal(1000);
    e2->calsal(200);
    e1->show();
    e2->show();
}