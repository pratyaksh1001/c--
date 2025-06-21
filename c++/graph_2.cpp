#include <bits/stdc++.h>
using namespace std;
// bfs traversal of graph alongwith construction of adjacency list
int main(){
    int n;
    int e;
    cin>>n>>e;
    vector<int> graph[n+1];
    queue<int> q;
    for(int i=0;i<e;i++){
        int t1,t2;
        cin>>t1>>t2;
        graph[t1].push_back(t2);
        graph[t2].push_back(t1);
    }
    int visited[n+1]={0};
    int start;
    cin>>start;
    visited[start]=1;
    q.push(start);
    vector<int> res;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        res.push_back(t);
        for(int i:graph[t]){
            if(!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
    for(int i:res){
        cout<<i<<" ";
    }
}