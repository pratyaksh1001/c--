#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5};
    int x=2;
    int arr2[5]={0};
    for(int i=0;i<5;i++){
        arr2[i]=arr[(x+i)%5];
    }
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
}