#include <iostream>
using namespace std;

class rect{
    int l,b;
    public:
    rect(int x, int y){
        this->l=x;
        this->b=y;
    }
    ~rect(){
        cout<<"object destroyed with area - "<<this->area()<<endl;
    }
    private:
    int area(){
        return this->l*this->b;
    }
    friend class rectins;
};

class rectins{
    public:
    friend rect;
    void compare(rect a, rect b){
        if(a.area()>b.area()){
            cout<<"first is larger"<<endl;
            cout<<a.area()<<endl<<b.area()<<endl;
        }
        else{
            cout<<"second is larger"<<endl;
            cout<<a.area()<<endl<<b.area()<<endl;
        }
    }
};
int main(){
    rect p(10,20);
    rect q(20,30);
    rectins x;
    x.compare(p,q);
}