/*
Given an unsorted array A of size N that contains only non negative integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.
*/

#include <iostream>
using namespace std;

int main(){
    int n=20;
    int arr[n]={1,8,9,0,5,6,4,3,2,11,90,56,34,89,11,22,88,-10,-20};
    int s=15;
    int c=0;
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=i;j<n;j++){
            for(int k=i;k<j;k++){
                x+=arr[k];
            }
            if(x-1==s){
                //printf("%d %d",i,j);
                cout<<i<<" "<<j<<endl;;
                c++;
                break;
            }
        }
    }
    if(c==0){
        cout<<"no result possible";
    }
}