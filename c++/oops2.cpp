#include <iostream>
using namespace std;

class rect{
    private:
    int len,brd;
    public:
    void enter(int l,int b){
        this->len=l;
        this->brd=b;
    }
    void show(){
        printf("the length is: %d\n",this->len);
        printf("the breadth is: %d\n",this->brd);
    }
    void area(){
        printf("the area is: %d\n",this->len*this->brd);
    }
    void boundry(){
        printf("the circumference is: %d\n",2*(this->len+this->brd));
    }
};

int main(){
    rect a;
    a.enter(10,20);
    a.show();
    a.area();
    a.boundry();
}