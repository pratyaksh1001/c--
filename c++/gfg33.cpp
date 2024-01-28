//find the lucky number
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int lucky(int arr[],int n,int x){
    if(x==10){
        return 0;
    }
    for(int i=x-1;i<n;i+=x){
        arr[i]=0;
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    lucky(arr,n,x+1);
}

int main(){
    int n=20;
    int arr[n]={6,5,3,4,2,34,2,78,65,432,90,12,34,567,65,43,79,41,89,70};
    lucky(arr,n,2);
    cout<<"the lucky numbers are: \n";
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            cout<<arr[i]<<" ";
        }
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}