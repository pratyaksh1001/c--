#include <bits/stdc++.h>
using namespace std;
class hello{
    public :
    static string name;
    int a;
    int b;
    hello(int n=11){
        a=n;
    }
};

string hello::name ="bmw";

int main(){
    hello c1(2);
    hello c2(3);
    hello c3();
    return 0;
}
