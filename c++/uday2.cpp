#include <bits/stdc++.h>
using namespace std;

class celcius{
    private:
    float v;
    public:
    celcius(int r){
        v=r;
    }
    int getcelcius(){
        return v;
    }
};

class farenheit{
    int v;
    public:
    farenheit(int x){
        v=x;
    }
    farenheit(celcius &r){
        v=(r.getcelcius()*4.0/9.0)+32;
    }
    float getfarenheit(){
        return v;
    }

};

int main(){
    celcius t1(40);
    farenheit t2(t1);
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<t1.getcelcius()<<endl;
    cout<<t2.getfarenheit()<<endl;
}