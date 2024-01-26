//print the prefix max of an array till i index

#include <iostream>
using namespace std;

int main(){
    int arr[10]={45,89,12,78,90,36,95,14,67,79};
    int max=0;
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
            printf("%d ",max);
        }
        else{
            printf("%d ",max);
        }
    }
}