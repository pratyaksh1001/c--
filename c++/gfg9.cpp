/*
Given an array A of integers and another number K. Find all the unique quadruple from the given array that sums up to K.
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    int n=10;
    int s=11;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==s){
                        printf("%d + %d + %d + %d = %d\n",arr[i],arr[j],arr[k],arr[l],arr[i]+arr[j]+arr[k]+arr[l]);
                    }
                }
            }
        }
    }
}