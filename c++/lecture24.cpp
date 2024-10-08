#include <bits/stdc++.h>
using namespace std;

class distance2{
    private:
    float km;
    float m;
    float ft;
    float inch;
    float mile;

    public:
    distance2(float x){
        this->km=x;
        this->m=km*1000;
        this->mile=km/1.4;
        this->inch=m*39;
        this->ft=12*inch;
    }
    void display(){
        cout<<"km = "<<km<<endl;
        cout<<"m = "<<m<<endl;
        cout<<"mile = "<<mile<<endl;
        cout<<"inch = "<<inch<<endl;
        cout<<"ft = "<<ft<<endl;
    }
};

int main(){
    distance2 d1(1);
    d1.display();
}