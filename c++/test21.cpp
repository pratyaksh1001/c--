//write a code to print all sub-arrays of an array

#include <iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={2,4,5,7,8};
    //int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //c++;
            for(int k=i;k<j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        //cout<<endl;
    }
    cout<<"number of sub-arrays is: "<<((n)*(n-1))/2;
}