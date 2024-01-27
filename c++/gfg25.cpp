/*
Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From a given cell, the miner can move

to the cell diagonally up towards the right 
to the right
to the cell diagonally down towards the right
*/
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int gold(int mine[5][7],int i,int j){
    if(j==6){
        return 0;
    }
        
}

int main(){
    int n=5;
    int m=7;
    int mine[n][m]={
        {1,6,7,8,3,4,6},
        {8,7,6,4,5,3,1},
        {3,2,1,5,6,9,4},
        {8,9,0,6,5,4,1},
        {1,2,3,4,8,9,0}
    };
    int i;
    int j;
    int x=0;
    printf("enter the mine from which you want to start: ");
    scanf("%d %d",&i,&j);
    for(int i=0;i<n;i++){

    }


cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}