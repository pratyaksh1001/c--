#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    
    Book() : title(""), author(""), price(0.0) {}


    friend ostream& operator<<(ostream& os, const Book& book) {
        os << "Title: " << book.title 
           << ", Author: " << book.author 
           << ", Price: Rs" << book.price;
        return os;
    }

    
    friend istream& operator>>(istream& is, Book& book) {
        cout << "Enter title: ";
        is.ignore(); 
        getline(is, book.title);
        cout << "Enter author: ";
        getline(is, book.author);
        cout << "Enter price: ";
        is >> book.price;
        return is;
    }
};

int main() {
    Book book;

  
    cin >> book;

    
    cout << book << endl;

    return 0;
}