#include <iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}
//class is a combination of datamambers and methods
//methods are the functions of a class
int main(){
    cout<<product(10,20)<<endl;
}

//public is accesible from any part of the program
//private members can be used only by methods within a class
//protected members can be accessed through a super class and by devided class
//
