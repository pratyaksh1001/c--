#include <iostream>
#include <string>
using namespace std;

class movie{
    string title;
    string dir;
    int duration;
    public:
    movie() : title(""), dir(""), duration(0) {}
    movie(string t,string d,int d2):title(t),dir(d),duration(d2){}
    friend ostream& operator<<(ostream &os, movie &m){
        os<<"title is: "<<m.title<<endl;
        os<<"director is: "<<m.dir<<endl;
        os<<"duration is: "<<m.duration<<endl;
        return os;
    }
    friend istream& operator>>(istream &is,movie &m){
        cout << "Enter title: ";
        is.ignore(); 
        getline(is, m.title);
        cout << "Enter diraector: ";
        getline(is, m.dir);
        cout << "Enter duration: ";
        is >> m.duration;
        return is;
    }
};

int main() {
    movie m;
    cin>>m;
    cout<<m;
}