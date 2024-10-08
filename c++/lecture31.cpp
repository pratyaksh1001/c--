#include <bits/stdc++.h>
using namespace std;

class vehicle{
    protected:
    string name;
    public:
    vehicle(string n):name(n){}
    virtual void show()=0;
};

class bike:public vehicle{
    private:
    int rent;
    public:
    bike(string s,int n):vehicle(s),rent(n){
        
    }
    void show(){
        cout<<name<<"->";
        cout<<"this is bike with rent: "<<rent<<endl;
    }
};

class car:public vehicle{
    private:
    int rent;
    public:
    car(string s,int n):vehicle(s),rent(n){
    }
    void show(){
        cout<<name<<"->";
        cout<<"this is car with rent: "<<rent<<endl;
    }
};

int main(){
    vehicle* v1=new bike("splender",300);
    vehicle* v2=new car("g wagon",1000);
    v1->show();
    v2->show();
}