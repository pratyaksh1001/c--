/*
Given a number N, the task is to find the largest prime factor of that number.
*/
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=19;
    int m=2;
    for(int i=2;i<=n;i++){
        int f=0;
        for(int j=2;j<=i;j++){
            if(i%j==0){
                f++;
            }
        }
        if(f==0){
            if(m<i){
                if(n%i!=0){
                    m=i;
                }
            }
        }
    }
    cout<<m<<endl;

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}
//to be done