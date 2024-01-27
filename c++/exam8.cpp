#include <iostream>
using namespace std;

int main(){
    int arr[20]={2,4,5,7,8,6,4,3,3,5,7,8,9,0,64,3,24,5,6,6};

    for(int i=0;i<20;i++){
        for(int j=i;j<20;j++){
            for(int k=i;k<=j;k++){
              cout<<arr[k]<<" ";
          }
           cout<<endl;
       }
       cout<<endl;
    }
}