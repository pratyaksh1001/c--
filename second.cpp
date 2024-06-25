#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    switch (x)
    {
    case 81 ... 100:
        cout<<"outstanding";
        break;
    case 61 ... 80:
        cout<<"excellent";
        break;
    case 51 ... 60:
        cout<<"good";
        break;
    case 30 ... 50:
        cout<<"average";
        break;
    default:
        break;
    }
}