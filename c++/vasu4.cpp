#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    vector <int>::iterator i;
    v1.insert(v1.begin()+2,10000);
    for(i=v1.begin();i<v1.end();i++){u
        cout<<*i<<endl;
    }
}