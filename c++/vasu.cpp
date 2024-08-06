#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(){
    vector <int> arr;
    
    for(int i=0;i<10;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}