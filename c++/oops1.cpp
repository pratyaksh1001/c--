#include <iostream>
#include <math.h>
using namespace std;

/*
Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
*/

class circle{   
    private:
    int radius;
    public:
    float area,cir;
    void enter(int r){
        this->radius=r;
    }
    void findarea(){
        printf("area is: %d\n",this->radius*this->radius*22/7);
    }
    void findcir(){
        printf("circumference is: %d\n",((44/7)*this->radius));
    }
};

int main(){
    circle a;
    a.enter(10);
    a.findarea();
    a.findcir();
}