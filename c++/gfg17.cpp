/*
Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From a given cell, the miner can move*/
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=5;
    int m=5;
    int max=0;
    int mine[n][m]={
        {4,7,8,5,2},
        {1,2,3,7,7},
        {9,0,1,2,0},
        {1,2,3,4,5},
        {3,4,7,8,9}
    };
    for(int i=0;i<n;i++){
        int g=0;
        if(i==n-1){
            
        }
        
    }



cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}
//to be done