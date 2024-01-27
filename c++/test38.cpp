//wap to print 1 2 3 4 5 using recursion

#include <iostream>
using namespace std;

int fun(int n,int c){
    if(c<=n){
        cout<<c<<endl;
        fun(n,c+1);
    }
}

int main(){
    int n=5;
    fun(n,1);
}