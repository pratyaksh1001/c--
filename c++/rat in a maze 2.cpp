//rat in a maze practice
#include <iostream>
using namespace std;

bool check(int maze[5][5],int x,int y){
    if(maze[x][y]==1){
        return true;
    }
    return false;
}
bool solve(int maze[5][5],int soln[5][5],int n,int x,int y){
    if(x==n-1 && y==n-1){
        soln[n-1][n-1]=1;
        return true;
    }
    if(check(maze,x,y)){
        soln[x][y]=1;
        if(check(maze,x+1,y)){
            
            cout<<"D";
            soln[x+1][y]=1;
            solve(maze,soln,n,x+1,y);
    }
    else if(check(maze,x,y+1)){
        
        cout<<"R";
        soln[x][y+1]=1;
        solve(maze,soln,n,x,y+1);
    }
    }
    
    else{
        soln[x][y]=0;
    }
}

int main(){
    int n=5;
    int soln[5][5]={0};
    soln[4][4]=1;
    string s="";
    int maze[5][5]={
    {1,1,1,1,1},
    {1,1,0,0,1},
    {1,1,0,1,0},
    {1,0,1,1,1},
    {1,1,1,1,1}
    };
    cout<<endl;
    solve(maze,soln,n,0,0);
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<soln[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}