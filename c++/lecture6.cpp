#include <iostream>
using namespace std;

void hello(string* s3){
    string s1="head";
    string s2="body";
    cout<<s1<<" "<<s2<<" "<<*s3<<endl;
}

int main(){
    string s="pratyaksh";
    hello(&s);
}
//whenever a program contains more than 1 function with same name and different params is called func overloading
//when a variable is passed through regerence then the object itself gets modified instead of a copy
//in call by value the actual value of var can't be changed only a copy of var is changed
//pointer is a varuable that hods memory address of another var
