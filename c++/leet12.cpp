#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

/*
There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].

You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.

Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique
*/

int travel(int gas[],int cost[],int n,int i,int f){
    
}

int main(){
    int n=5;
    int gas[n]={1,2,3,4,5};
    int cost[n]={3,4,5,1,2};
    int f=0;
    for(int i=0;i<n;i++){
        travel(gas,cost,n,i,f);
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}