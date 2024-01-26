#include <iostream>
 using namespace std;
int main(){
    int a;
    std::cout<<"enter the number of rows: ";
    std::cin>>a;


    for(int i=0;i<a;i++){
        std::cout<<"\n";
        for(int x=0;x<=i;x++){
            std::cout<<"*";
        }
        for(int j=(2*(a-i))-1;j>1;j--){
            std::cout<<" ";
        }
        for(int y=0;y<=i;y++){
            std::cout<<"*";
        }
    }



    for(int i=a-1;i>=0;i--){
        std::cout<<"\n";
        for(int x=0;x<=i;x++){
            std::cout<<"*";
        }
        for(int j=(2*(a-i))-2;j>0;j--){
            std::cout<<" ";
        }
        for(int y=0;y<=i;y++){
            std::cout<<"*";
        }
    }
}