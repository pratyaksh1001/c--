#include <iostream>
using namespace std;

class nums{
    private:
    int a,b,c;
    static int temp;
    public:
    nums(int x,int y,int z){
        this->a=x;
        this->b=y;
        this->c=z;

    }

    void print(){
        cout<<temp<<endl;
    }
};


int nums::temp=1000;



int main(){
    nums c1(10,20,60);
    nums c2(20,40,60);

    c1.print();
    c2.print();
}

//static dsta member is initialized to 0 whenever the 1st object of it's class is created no other initialized value is permitted
//only 1 copy of a static data member is created and shared by all
//static data member is visible in entire program