#include <bits/stdc++.h>
using namespace std;

class circle{
    private:
    int radius;
    public:
    circle(int r){
        radius=r;
    }
    ~circle(){
        cout<<"circle is destroyed"<<endl;
    }
    float circumference(){
        return (2*(22.0/7.0)*radius);
    }
    float area(){
        return (radius*radius*(22.0/7.0));
    }
};

int main(){
    circle c1(10);
    printf("%.2f\n%.2f\n",c1.circumference(),c1.area());
    
}