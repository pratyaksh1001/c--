#include <iostream>

int main(){
    int a;
    int count=0;
    std::cout<<"enter the number of rows: ";
    std::cin>>a;
    for(int i=0;i<a;i++){
        std::cout<<"\n";
        if(i%2==0){
            for(int j=0;j<i;j++){
                count++;
            if(count%2==0){
                std::cout<<0<<" ";
            }
            else{
                std::cout<<1<<" ";
            }
        }
        }
        else{
            for(int k=0;k<i;k++){
                count++;
            if(count%2==0){
                std::cout<<1<<" ";
            }
            else{
                std::cout<<0<<" ";
            }
        }
        }
    }
}