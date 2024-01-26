//write a code to find the maximum possible profit and loss

#include <iostream>
using namespace std;

int main(){
    int arr[10]={100,4,3,2,8,7,6,3,2,10};
    int max=0;
    int max_loss=1000;
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(arr[i]<arr[j]){
                if(max<arr[j]-arr[i]){
                    max=arr[j]-arr[i];
                }
            }
            else if(arr[i]>arr[j]){
                if(max_loss>arr[j]-arr[i]){
                    max_loss=arr[j]-arr[i];
                }
            }
        }
    }
    cout<<"the max profit is: "<<max<<endl;
    cout<<"the max loss is: "<<max_loss;
}