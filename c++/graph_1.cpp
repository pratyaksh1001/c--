#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the number of vertices: ";
    cin>>n;
    cout<<"enter the number of edges: ";
    cin>>m;
    int graph[n+1][n+1]={0};
    for(int i=0;i<n;i++){
        int start,end;
        cin>>start>>end;
        graph[start][end]=1;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    
}