//write a code to find the leader numbers

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[10]={2,4,5,7,7,65,4,3,21,3};
    int leaders[10];
    int c=0;
    for(int i=0;i<9;i++){
        if(arr[i]>arr[i+1]){
            leaders[c]=arr[i];
            c++;
        }
    }
    for(int j=0;j<c;j++){
        cout<<leaders[j]<<" is a leader number"<<endl;
    }
}