#include <iostream>
using namespace std;

class counter{
    private:
    static int count;
    public:
    void increment(){
        count++;
    }
    static int get(){
        return count;
    }
};

int counter::count=11;

int main(){
    counter a,b;
    cout<<a.get()<<endl;
    a.increment();
    cout<<b.get()<<endl;
    b.increment();
    cout<<b.get()<<endl;
}