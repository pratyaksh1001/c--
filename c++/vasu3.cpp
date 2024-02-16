#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(){
    int a=10;
    int i=0;
    string s="";
    while(a>0){
        s+=(atoi)a%2;
        a/=2;
        i++;
    }
}