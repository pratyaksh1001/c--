#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float grade;

public:

    Student(string n, int a, float g) : name(n), age(a), grade(g) {}
    Student(Student &s) : name(s.name), age(s.age), grade(s.grade) {}

    
    void display()  {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student original("Prabhakar Kumar", 28, 94.5);
    Student copy(original);
    cout << "Original Student:" << endl;
    original.display();
    cout << endl << "Copied Student:" << endl;
    copy.display();
    return 0;
}