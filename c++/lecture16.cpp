#include<iostream>
using namespace std;

class work{


public:
int* a;
work(int* o){
    this->a=o;
}
void display(){cout<<*a<<endl;}

};
int main(){
    int b=10;
    work one(&b);
    work two=one;
    one.display();
    two.display();
    b=100;
    one.display();
    two.display();
}