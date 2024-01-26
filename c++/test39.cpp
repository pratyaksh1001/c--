//number of ways to reach the destination in a matrix
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int move(int n, int m,int c){
    if(n==1 || m==1){
        return c+1;
    }
    return move(n-1,m,c)+move(n,m-1,c);
}
int main(){
    int n=5;
    int m=7;
    int mat[n][m]={
        {5,7,9,7,4,5,5},
        {9,3,2,1,6,8,5},
        {5,4,3,2,8,9,5},
        {6,8,5,4,2,3,1},
        {9,0,7,6,5,4,2}
    };
    int s=mat[0][0];
    int d=mat[n-1][m-1];
    cout<<move(n,m,0);
    cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}