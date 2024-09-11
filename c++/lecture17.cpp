#include <iostream>
using namespace std;

class porsche{
    int seat,year,serial,registration;
    string name,color,engine;
    public:
    porsche(int s,int r,int y,string n){
        this->color="red";
        this->seat=4;
        this->engine="v8";
        this->name=n;
        this->year=y;
        this->serial=s;
        this->registration=r;
    }
    porsche(porsche &a,int s,int r,int y,string n){
       this->color=a.color;
        this->seat=a.seat;
        this->engine=a.engine;
        this->name=n;
        this->year=y;
        this->serial=s;
        this->registration=r;
    }
    void display(){
        cout<<this->color<<endl<<this->seat<<endl<<this->engine<<endl<<this->name<<endl<<this->year<<endl<<this->serial<<endl<<this->registration<<endl;
    }
};

int main(){
    porsche p1(1,1,2010,"pratyaksh");
    porsche p2(p1,2,2,2011,"asdfghjkl");
    p1.display();
    cout<<endl;
    p2.display();
}