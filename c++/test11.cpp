//.Binary to decimal conversion program
//.wap to find all divisors of a number
//.infinite loop  2programs
//.range based loop 2programs
//.for each loop 2programs

#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number: ";
    cin>>a;
    int i=1;
    while(a>=i){
        if(a%i==0){
            cout<<i<<endl;
        }
        i++;
    }

}