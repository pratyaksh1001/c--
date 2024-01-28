#include <iostream>
using namespace std;

int swap(int a,int b){
    int t=a;
    a=b;
    b=t;
}
int quick(int low,int high,int p,int arr[]){
    if(high-low==0){
        return 0;
    }
    int i=low+1;
    int j=high;
    while(true){
        if(arr[i]<arr[p]){
            i++;
        }
        else{
            if(arr[j]>arr[p]){
                j--;
            }
            else{
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;
            }
        }
        if(j<i){
            int t2=arr[j];
            arr[j]=arr[p];
            arr[p]=t2;
            quick(low,j-1,p,arr);
            quick(j+2,high,j+1,arr);
            break;
        }
    }
    for(int l=0;l<8;l++){
        cout<<arr[l]<<" ";
    }
    }

int main(){
    int arr[8]={1,2,7,8,5,4,3,9};
    quick(1,8,0,arr);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}