/*Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers.*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n=10;
    int arr[n]={1,2,3,8,9,0,5,6,7,5};
    sort(arr,arr+n);
    int missing;
    int duplicate;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]-1){
            missing=arr[i+1]-1;
        }
        if(arr[i]==arr[i+1]){
            duplicate=arr[i+1];
        }
    }
    printf("the repeated number is: %d\n",duplicate);
    printf("the missing number is: %d\n",missing);
}