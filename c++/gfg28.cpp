/*
Write a program to Validate an IPv4 Address.
According to Wikipedia, IPv4 addresses are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1
A valid IPv4 Address is of the form x1.x2.x3.x4 where 0 <= (x1, x2, x3, x4) <= 255.
Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255).
Note: Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.

Your task is to complete the function isValid which returns 1 if the given IPv4 address is valid else returns 0. The function takes the IPv4 address as the only argument in the form of string.
*/
#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    string x;
    cout<<"enter the ip address: ";
    cin>>x;
    int l=0;
    int k=0;
    for(int i=0;i<x.size();i++){
        string t;
        if(x[i]=='.'){
            t=x.substr(l,i);
            if(stoi(t)>=0 && stoi(t)<=255){
                if(t[0]!='0' && t[1]!='0'){
                    continue;
                }
                else{
                    k++;
                    //break;
                }
            }
            else{
                k++;
                //break;
            }
        }
        else{
            continue;
        }
        l=i;
        
    }
    cout<<k<<endl;

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;

}