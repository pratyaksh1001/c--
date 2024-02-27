/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
*/
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[n]={7,1,6,4,7,9,0,4,3,6};
    int key=6;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==key && arr[j]==key){
            printf("first occurance is: %d\nlast occurence is: %d",i,j);
            break;
        }
        else if(arr[i]==key && arr[j]!=key){
            j--;
        }
        else if(arr[i]!=key && arr[j]==key){
            i++;
        }
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}