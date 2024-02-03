#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

class student{
    //anything befiore global is private 
    public:
    string name;
    int age;
    bool gender;
    void printinfo(){
        cout<<"name = "<<name<<endl;
        cout<<"age = "<<age<<endl;
        cout<<"gender = "<<gender<<endl;
    }
    void namechange(string s){
        name=s;
    }
    //constructor
    student(string s,int a,int g){
        name=s;
        age=a;
        gender=g;
    }
    //this is an exception handling constructor when no parameters are passed
    student(){
        cout<<"default constructor";
    }
    ~student(){
        //this is distructor which is called upon destruction of object
        cout<<"the object is destroyed now\n";
    }
};

int main(){
    /*student arr[2];
    for(int i=0;i<2;i++){
        cout<<"name: ";
        cin>>arr[i].name;
        cout<<"age: ";
        cin>>arr[i].age;
        cout<<"gender: ";
        cin>>arr[i].gender;
    }
    arr[1].namechange("hello world");
    for(int i=0;i<2;i++){
        arr[i].printinfo();
    }*/

    //another way to make an object is
    student a("pratyaksh",18,1);
    a.printinfo();
    student b(a); //copying the object
    b.printinfo();
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}