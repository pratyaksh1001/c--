/*given an integer array coins[ ] of size N representing different denominations of currency and an integer sum, find the number of ways you can make sum by using different combinations from coins[ ].  
Note: Assume that you have an infinite supply of each type of coin. And you can use any coin as many times as you want.*/
#include <iostream>
using namespace std;

/*
int change(int arr[],int s,int r,int c){
    if(s==r){
        return 0;
    }
    if(arr[])
}
*/

int main(){
    int n=5;
    int arr[n]={1,2,5,10,20};
    //int arr2[];
    int r=52;
    int s=0;
    int c=0;
    int i=0;
    int j=n-1;
    while(r>s){
        if(r==s){
            c++;
            s=0;
        }
        if(){}
    }
}

//to be done