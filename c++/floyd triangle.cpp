#include <iostream>

int main(){
    int a;
    std::cout<<"enter the number of rows: ";
    std::cin>>a;
    int count=0;
    for(int i=0;i<=a;i++){
        std::cout<<"\n";
        for(int j=0;j<i;j++){
            count++;
            std::cout<<count<<" ";
        }
    }
}