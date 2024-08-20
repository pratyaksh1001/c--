#include <iostream>
#include <string>
using namespace std;

// constructors

class movie{
    private:
    int year;
    string title,director;
    public:
    movie(string a, string b,int y){
        this->title=a;
        this->director=b;
        this->year=y;
    }
    movie(movie &ref){ // this is example of custom copy that does deep copy
        this->director=ref.director; // here the values are directly getting passed by reference
        this->title=ref.title; 
        this->year=ref.year;
    }
    ~movie(){
        cout<<"movie - "<<this->title<<" destroyed"<<endl;
    }
};

int main(){
    movie m1("titanic","myself",2000);
    movie m2("hello world","yourself",1999);
    movie m3=m1;
}

/*
constructor is a special type of function 
which has the same name as class
constructor is automatically  called at the time of object delaration
the retuen type of the constructor is the class type
*/

/*
distructor is a special type of function that is executed automatically when an onject is destroyed that has bee created by constructor
in other words we can say it is used to deallocate the memory that has been allocted by the constructor
destructor is used with tilde (~)
*/

/*
type of constructors  

default constructor - the constructor is empty or doesn't  put anything in the object
                      default constructor doesn't takes any arguments it has no parameters.

parameterised constructor - it has parameters apart from this constructor is used to provide 
                            different values of distinct objects

copy constructor - there are 2 types of cpy defaukt and custom copy constructor is used for custom copy
                   a constructor that is used to copy/initialize the values of one object into another object is called copy constructor.

*/ 