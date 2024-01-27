#include <iostream>
using namespace std;

int main(){
    int n=4;
    int m=5;
    int mat1[n][m]={
        {6,4,2,5,9},
        {1,2,8,9,4},
        {6,3,8,9,0},
        {1,2,3,4,5}
    };
    int mat2[n][m]={
        {4,5,6,7,8},
        {2,8,9,0,6},
        {3,5,6,7,1},
        {7,6,15,14,3}
    };
    int sum[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<endl<<"\t";
        for(int j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        
    } 
}