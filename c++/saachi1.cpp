#include <bits/stdc++.h>
using namespace std;

class saachi{
    private:
    int a,b;
    
    public:
    static string name;
    saachi(int x){
        a=x;
    }
    void show(){
        cout<<"hello"<<endl<<a<<endl<<name<<endl;
    }
    ~saachi(){
        cout<<"object destroyed"<<endl;
    }
};
string saachi::name="saachi";

int main(){
    saachi s1(11);
    s1.show();
    saachi s2(1);
    s2.show();

}