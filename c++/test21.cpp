//write a code to print all sub-arrays of an array

#include <iostream>
using namespace std;

int main(){
    int n=20;
    int arr[n]={2,4,5,7,8,6,4,3,3,5,7,8,9,0,64,3,24,5,6,6};
    //int c=0;
    for(int i=0;i<20;i++){
        for(int j=i;j<20;j++){
            //c++;
            cout<<"[";
            for(int k=i;k<j;k++){
                cout<<arr[k]<<",";
            }
            cout<<"]"<<endl;
        }
        cout<<endl;
    }
    cout<<"number of sub-arrays is: "<<((n)*(n-1))/2;
}