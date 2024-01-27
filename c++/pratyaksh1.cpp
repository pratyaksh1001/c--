#include <iostream>
using namespace std;

int main(){
    int arr[10]={5,6,8,4,3,2,1,1,9,6};
    int left[10];
    int right[10];
    int lmax=0;
    int rmax=0;
    int area=0;
    for(int i=0;i<10;i++){
        if(lmax<arr[i]){
            lmax=arr[i];
        }
    }
    for(int j=9;j>=0;j--){
        if(rmax<arr[j]){
            rmax=arr[j];
        }
    }
    for(int x=0;x<10;x++){
        for(int y=x;y<10;y++){
            if(area<(min(arr[x],arr[y])*(y-x))){
                area=(min(arr[x],arr[y])*(y-x));
            }
            cout<<(min(arr[x],arr[y])*(y-x))<<endl;
        }
    }
    cout<<"the largest possible container's area is: "<<area;
}