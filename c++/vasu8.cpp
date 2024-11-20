#include <bits/stdc++.h>
using namespace std;

class matrix{
    int n;
    vector<vector<int>> mat;
    public:
    matrix(int size){
        n=size;
        for(int i=0;i<n;i++){
            vector<int> x;
            for(int j=0;j<n;j++){
                int y;
                cout<<"enter the number: ";
                cin>>y;
                x.push_back(y);
            }
            mat.push_back(x);
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    int sum(){
        int r=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    r+=mat[i][j];
                }
                if(i+j==mat.size()-1){
                    r+=mat[i][j];
                }
            }
        }
        return r;
    }
};

int main(){
    int n;
    cout<<"enter dimension: ";
    cin>>n;
    matrix m1(n);
    m1.display();
   cout<<m1.sum()<<endl;
}