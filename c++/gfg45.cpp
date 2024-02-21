/*
Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X. 
*/
#include <iostream>
using namespace std;

int main(){
    int n=10;
    int arr[n]={7,3,1,6,8,9,1,9,0,5};
    int m=0;;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<i+3;j++){
            s+=arr[j];
        }
        if(m<s){
            m=s;
        }
        cout<<s<<endl;
    }
    cout<<"the maximum is: "<<m<<endl;
}