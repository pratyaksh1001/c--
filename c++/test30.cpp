#include <iostream>
#include <vector>
using namespace std;

bool check(int maze[5][5],int soln[5][5],int n,int x,int y){
    if(maze[x][y]==1 && x<5 && y<5){
        return true;
    }
    return false;
}

bool path(int maze[5][5],int soln[5][5],int n,int x,int y,string s){
    if(x==4 && y==4){
        soln[x][y]=1;
        return false;
    }
    if(check(maze,soln,n,x,y)){
        soln[x][y]=1;
        if(path(maze,soln,n,x+1,y,s)){
            cout<<"R";
            return true;
        }
        else if(path(maze,soln,n,x,y+1,s)){
            cout<<"D";
            return true;
        }
    }
    else{
        soln[x][y]=0;
        return false;
    }
}
int main(){
    int maze[5][5]={
        {1,1,1,1,1},
        {1,1,1,1,1},
        {0,0,0,0,1},
        {1,0,1,1,1},
        {0,0,1,1,1}
    };
    int x=0;
    int y=0;
    int n=0;
    int soln[5][5]={0};
    string s="";
    path(maze,soln,n,x,y,s);
    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<soln[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<s;
}