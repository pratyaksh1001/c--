//bubble sortting in arrays

#include <iostream>
using namespace std;

int main(){
    int arr[20]={5,7,9786,78,7,65,4,3,2,4,6,7,8,7,54,3,3,45,7,67};
    for(int i=1;i<20;i++){
        if(arr[i-1]>arr[i]){
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
    for(int j=0;j<20;j++){
        printf("%d ",arr[j]);
    }
}