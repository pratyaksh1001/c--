#include <iostream>
using namespace std;

class class1{
    private:
    int a;
    int b;
    public:
    class1(int x,int y){
        this->a=x;
        this->b=y;
    }
    int add(){
        return this->a+this->b;
    }
};

int main(){
    int i,j;
    cin>>i;
    cin>>j;
    class1 s1(i,j);
    cout<<s1.add()<<endl;
    
}