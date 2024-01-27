#include <iostream>

int main(){
    int a;
    int fact=1;
    std::cout<<"enter the number: ";
    std::cin>>a;
    for(int i=a;i>=1;i--){
        fact*=i;
    }
    std::cout<<fact<<" is the factorial ";
}