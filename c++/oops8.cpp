#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

class shop{
    int id[100];
    int price[100];
    int counter;
    public:
        void initcounter(){
            counter=0;
        }
        void getprice(){
            cout<<"enter Id of the item: "<<endl;
            cin>>id[counter];
            cout<<"enter the price of item: "<<endl;
            cin>>price;
            counter++;
        }
        void setprice(){
            cout<<"enter the "
        }
        void display(){}

};

int main(){

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}