#include <iostream>
using namespace std;

bool check(int** arr,int n,int x,int y){
    if(arr[x][y]==1 && x<n && y<n){
        return true;
    }
    return false;
}

int solution(int** arr,int n,int x,int y,int** soln){
    if(check(arr,n,x,y)){
        if(solution(arr,n,x,y+1,soln)){
            cout<<"D";
            soln[x][y+1]=1;
        }
        else if(solution(arr,n,x-1,y,soln)){
            cout<<"L";
            soln[x-1][y]=1;
        }
        else if(solution(arr,n,x+1,y,soln)){
            cout<<"R";
            soln[x+1][y]=1;
        }
        else if(solution(arr,n,x,y-1,soln)){
            cout<<"L";
            soln[x][y-1]=1;
        }

    }

}

int main(){
    int n=4;
    int maze[4][4]={
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
    int soln[4][4]={0};
    solution(maze[n][n],n,0,0,soln[n][n]);
}