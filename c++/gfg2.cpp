/*Given an array a of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. */
#include <iostream>
using namespace std;

int main(){
    int arr[20]={4,4,6,8,9,0,6,5,3,3,5,6,7,9,0,1,2,3,4,5};
    int arr2[20]={0};
    int n=20;
    int f=0;
    int x=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                f++;
                arr2[i]=arr[i];
            }
        }
    }
    cout<<endl;
    if(f==0){
        cout<<"there is no duplicate";
    }
    else{
        for(int i=0;i<f;i++){
            cout<<arr2[i]<<" ";
        }
    }
}