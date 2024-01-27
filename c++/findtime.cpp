#include <iostream>
#include <chrono>
using namespace std;
//use this before main
auto start = chrono::steady_clock::now();
//use this at the end of main
int main(){

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}