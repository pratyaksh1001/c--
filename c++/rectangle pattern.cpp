#include <iostream>
int main(){
    int a;
    int b;
    std::cout<<"enter the number of rows: ";
    std::cin>>a;
    std::cout<<"enter the number of columns: ";
    std::cin>>b;
    for(int i=0;i<a;i++){
        std::cout<<"\n";
        std::cout<<"*";
        if(i==0 || i==a-1){
            for(int j=0;j<b;j++){
            std::cout<<"*";
        }
        }
        else{
            for(int j=0;j<b;j++){
            std::cout<<" ";
        }
        }
        std::cout<<"*";
    }
}
