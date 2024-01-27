//write a code to display all the windows using sliding windows technique

#include <iostream>
using namespace std;

int main(){
    int arr[20]={2,4,5,7,8,6,4,3,3,5,7,8,9,0,64,3,24,5,6,6};
    int x=0;
    
    while(x<18){
        cout<<arr[x]<<" "<<arr[x+1]<<" "<<arr[x+2]<<endl;
        x++;
    }
}