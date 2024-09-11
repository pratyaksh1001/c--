//How does the String class in the provided code implement and use the [] operator for indexing, and what are the effects of modifying a character in the string using this operator?

#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String(const char* str = "") {
        size = strlen(str);
        data = new char[size + 1];
        strcpy(data, str);
    }

    ~String() {
        delete[] data;
    }

    char& operator[](size_t index) {
        if (index >= size) throw out_of_range("Index out of range");
        return data[index];
    }

    void display() const {
        cout << data << endl;
    }

private:
    char* data;
    size_t size;
};

int main() {
    String str("Prabhakar");

    cout << "Original string: ";
    str.display();

    str[0] = 'p';

    cout << "Modified string: ";
    str.display();

    return 0;
}