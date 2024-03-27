#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<int> arr1;
     for(int i=0;i<5;i++){
          int x;
          cout<<"enter the number: ";
          cin>>x;
          arr1.push_back(x);
     }
     for(int i=0;i<arr1.size();i++){
          cout<<arr1[i]<<" ";
     }
     arr1.pop_back();
     cout<<endl;
     for(int i=0;i<arr1.size();i++){
          cout<<arr1[i]<<" ";
     }
     arr1.assign(100,4);
     for(int i=0;i<arr1.size();i++){
          cout<<arr1[i]<<" ";
     }
     cout<<endl<<sizeof(arr1)<<endl;
}