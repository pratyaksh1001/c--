/*
Given an array arr of n integers, write a function that returns true if there is a triplet (a, b, c) from the array (where a, b, and c are on different indexes) that satisfies a2 + b2 = c2, otherwise return false.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n=10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    sort(arr,arr+n);
    int i=0;
    int j=n/2;
    int k=n-1;
    int s=0;
    int f=0;
    while(f==0){
        if((arr[i]*arr[i])+(arr[j]*arr[j])==(arr[k]*arr[k])){
            f++;
            printf("%d and %d and %d",i,j,k);
        }
        else if((arr[i]*arr[i])+(arr[j]*arr[j])<(arr[k]*arr[k])){
            i++;
        }
        else if((arr[i]*arr[i])+(arr[j]*arr[j])>(arr[k]*arr[k])){
            j--;
        }
    }
}
//to be done