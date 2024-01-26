//make a sliding window code and print the minimum sum of the windows
#include <iostream>
using namespace std;

int main(){
    int arr[20]={4,6,5,3,2,2,7,9,6,4,2,6,5,78,65,3,4,5,9,0};
    int arr2[18];
    int x=0;
    while(x<18){
        int s=arr[x]+arr[x+1]+arr[x+2];
        arr2[x]=s;
        x++;
    }
    int min=10000;
    for(int i=0;i<18;i++){
        if(min>arr2[i]){
            min=arr2[i];
        }
    }
    cout<<min;
}