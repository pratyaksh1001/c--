#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=20;
    int arr[20]={9,2,4,5,0,8,9,8,6,4,3,4,5,7,8,9,9,9,3,2};
    int arr2[n]={0};
    int c[10];
    for(int i=0;i<10;i++){
        int x=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                x++;
            }
        }
        c[i]=x;
    }
    int k=0;
    for(int i=0;i<10;i++){
      for(int j=0;j<c[i];j++){
        arr2[k]=i;
        k++;
      }
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}