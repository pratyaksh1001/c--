#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int main(){
    int n=10;
    int x=11;
    int arr[n]={8,3,4,6,7,8,2,7,9,10};
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(true){
        if(arr[i]+arr[j]>x){
            j--;
        }
        else if(arr[i]+arr[j]<x){
            i++;
        }
        else if(arr[i]+arr[j]==x){
            cout<<arr[i]<<" + "<<arr[j]<<" = "<<x<<endl;
            break;
        }
        else if(i==j){
            cout<<"solution not possible"<<endl;
            break;
        }
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}