#include <iostream>

int main(){
    int a;
    std::cout<<"enter the number of rows: ";
    std::cin>>a;
    for(int i=a;i>0;i--){
            std::cout<<"\n";

        for(int j=1;j<=i;j++){
            std::cout<<j<<" ";
        }

    }
}