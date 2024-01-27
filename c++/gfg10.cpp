/*
Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water) and '1's(Land). Find the number of islands.
*/

#include <iostream>
using namespace std;

bool check(int arr[2][6],int i,int j){
    if(arr[i][j]==0){
        return true;
    }
    else {
        return false;
    }
}
//yet to be done 
int island(int arr[2][6],int i,int j){
    if(check(arr,i+1,j) && check(arr,i+1,j+1) && check(arr,i,j+1) && check(arr,i-1,j) && check(arr,i,j-1) && check(arr,i-1,j-1) && check(arr,i+1,j-1) && check(arr,i-1,j+1)){
        cout<<"I";
    }
    else{
        cout<<"0";
    }
}

int main(){
    int n=2;
    int m=6;
    int arr[n][m]={{0,1,1,1,0,0,0},{0,0,1,1,0,1,0}};
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            island(arr,i,k);
        }
        cout<<endl;
    }


/*
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                if(i>0 && j>0){
                    if(arr[i+1][j]==0 && arr[i][j+1]==0 && arr[i-1][j]==0 && arr[i-1][j-1]==0 && arr[i][j-1]==0 && arr[i-1][j+1]==0 && arr[i+1][j-1]==0 && arr[i+1][j+1]==0){
                        cout<<" I ";
                        c++;
                    }
                    else{
                        cout<<" 0 ";
                    }
                }
                else if(i==0 && j!=0){
                    if(arr[i+1][j]==0 && arr[i][j+1]==0 && arr[i][j-1]==0 && arr[i+1][j-1]==0 && arr[i+1][j+1]==0){
                        cout<<"I";
                        c++;
                    }
                }
                else if(j==0 && i!=0){
                    if(arr[i+1][j]==0 && arr[i][j+1]==0 && arr[i-1][j]==0 && arr[i-1][j+1]==0 && arr[i+1][j+1]==0){
                        cout<<"I";
                        c++;
                    }
                    else{
                        cout<<" 0 ";
                    }
                }

            }
        }
    }
*/
}