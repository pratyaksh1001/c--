//write a code to calculate the net volume of rain water 
//collected between buildings

#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,3,8,5,4,3,10,2,7,8};
    int right[10];
    int left[10];
    int lmax=arr[0];
    int rmax=arr[9];
    int v=0;
    int water[10]={0};
    for(int i=0;i<10;i++){
        if(lmax<arr[i]){
            lmax=arr[i];
            left[i]=lmax;
        }
        else{
            left[i]=lmax;
        }
    }
    for(int l=9;l>=0;l--){
        if(rmax<arr[l]){
            rmax=arr[l];
            right[l]=rmax;
        }
        else{
            right[l]=rmax;
        }
    }
    for(int x=0;x<9;x++){
        int m=min(right[x],left[x]);
        v=v+(m-arr[x]);
        water[x]=m-arr[x];
        cout<<water[x]<<endl;
    }
    cout<<"the volume of water held between the buildings is: "<<v;
}