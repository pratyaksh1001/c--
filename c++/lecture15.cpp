#include <iostream>
#include <string>
using namespace std;

class diablo{
    
    private:
    string name;
    int reg_num;
    int year;
    string color;
    int seat;
    int volume;

    public:
    diablo(string n,int reg,int y){
        this->color="red";
        this->seat=4;
        this->volume=1000;
        this->name=n;
        this->reg_num=reg;
        this->year=y;
    }
    diablo(diablo &a){
        this->color=a.color;
        this->seat=a.seat;
        this->volume=a.volume;
        }
    void newdata(string n,int r,int y){
        this->reg_num=r;
        this->name=n;
        this->year=y;
    }
    void display(){
        cout<<name<<endl;
        cout<<reg_num<<endl;
        cout<<year<<endl;
        cout<<color<<endl;
        cout<<seat<<endl;
        cout<<volume<<endl;
        cout<<endl;

    }
};

int main(){
    diablo d1("pratyaksh",1,2010);
    diablo d2(d1);
    d2.newdata("asdfghj",2,2011);
    d1.display();
    d2.display();
}