#include <iostream>
using namespace std;

class Vehicle {

public:
    void show() {
        cout << "This is a Vehicle" << endl;
    }
};

class Car : private Vehicle {
public:
    void show() {
        cout << "This is a Car" << endl;
    }
};

class Bike : private Vehicle {
public:
    void show() {
        cout << "This is a Bike" << endl;
    }
};

class Garage : private Car, private Bike {
public:
    void display() {
        Car::show();
        Bike::show();
    }
};

class Owner : private Garage {
public:
    void introduce() {
        cout << "I am the Owner." << endl;
    }
};

int main() {
    Garage garage;
    garage.display();

    Owner owner;
    owner.introduce();
    return 0;
}

/*
What issues might arise when calling garage.display() in the main() function?
How would you resolve the ambiguity when multiple show methods exist in the derived classes (Car and Bike)?
*/