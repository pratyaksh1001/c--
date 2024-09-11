#include <bits/stdc++.h>
using namespace std;

class vectorclass{
    int x,y,z;
    public:
    vectorclass(int a=NULL,int b=NULL,int c=NULL){
        this->x=a;
        this->y=b;
        this->z=c;
    }
    void display(){
        cout<<this->x<<endl<<this->y<<endl<<this->z<<endl<<endl<<endl;
    }
    vectorclass(vectorclass &a){
        // deep copy
        this->x=a.x;
        this->y=a.y;
        this->z=a.z;
    }
    void change(int i){
        this->x=i;
    }
};

int main(){
    cout<<endl<<endl;
    vectorclass v1(10,20,30);
    vectorclass v2=v1; //shallow copy
    vectorclass v3(v1); //deep copy
    v2.change(100);
    v1.display();
    v2.display();
    v3.display();
}