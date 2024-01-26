#include <iostream>

int main(){

    int a=50;
    //std::cout<<"enter the height: ";
    //std::cin>>a;
    for(int i=a;i>0;i--){
        std::cout<<"\n";
        for(int k=0;k<i-1;k++){
            std::cout<<" ";
        }
        for(int j=0;j<a;j++){
            std::cout<<"*";
        }
    }
}