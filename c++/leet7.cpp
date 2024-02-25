#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int x=12;
    //printf("enter the number: ");
    //scanf("%d",&x);
    int c=0;
    for(int i=2;i<=x;i++){
        int f=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                f++;
            }
        }
        if(f==0){
            c++;
        }
    }
    cout<<"number of primes is: "<<c<<endl;

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}