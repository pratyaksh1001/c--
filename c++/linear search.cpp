#include <iostream>
using namespace std;

int main(){
    int n=20;
    int arr[n]={1,8,9,0,6,5,4,3,2,1,-1,-5,-6,-3,-4,6,-7,-3,0,-1};
    int key=-1;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"index is: "<<i<<endl;
            break;
        }
    }
}