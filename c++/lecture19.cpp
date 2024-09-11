#include <iostream>
using namespace std;

//how does the overloaded = operator work in point class and how is it used to compare 2 point object in the provided code

class complex{
    private:
    int x,y;
    public:
    complex(int a,int b){
        x=a;
        y=b;
    }
    complex(){
        x=NULL;
        y=NULL;
    }
    complex operator+(complex &o1){
        complex result;
        result.x=o1.x+this->x;
        result.y=o1.y+this->y;
        return result;
    }
    bool operator==(complex &o2){
        if(o2.x==x && o2.y==y){
            return true;
        }
        else{
            return false;
        }
    }
    void display(){
        cout<<this->x<<endl;
        cout<<this->y<<endl;
    }
};

int main(){
    complex c1(10,20);
    complex c2(20,30);
    complex c3=c1+c2;
    complex c4(30,50);
    c3.display();
    c4.display();
    bool r=c3==c4;
    cout<<r<<endl;
}