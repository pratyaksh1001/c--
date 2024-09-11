// box class represents a 3D box with length width and height 
// overload the + operator to combine 2 box by adding their dimensions 
// display method output the dimensions of the box 
// create 2 box objects and combine them using the overloaded + operator and display the result

#include <bits/stdc++.h>
using namespace std;

class box{
    private:
    int l,b,h;
    public:
    box operator+(box &b1){
        box r;
        r.l=b1.l+this->l;
        r.b=b1.b+this->b;
        r.h=b1.h+this->h;
        return r;
    }
    void display(){
        cout<<"length is: "<<l<<endl;
        cout<<"breadth is: "<<b<<endl;
        cout<<"height is: "<<h<<endl;
    }
    box(int a, int b, int c){
        this->l=a;
        this->b=b;
        this->h=c;
    }
    box(){
        l=NULL;
        b=NULL;
        h=NULL;
    }
};

int main(){
    box a(10,20,30);
    box b(20,30,40);
    box c=a+b;
    c.display();
}