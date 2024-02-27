#include <iostream>
<<<<<<< HEAD
#include <algorithm>
using namespace std;

int main(){
    int n=10;
    int arr[n]={7,3,6,5,1,9,0,6,5,4};
    int k=17;
    int s=0;
    sort(arr,arr+n);
    for(int i=0;i<n-5;i++){
        for(int j=i;j<=i+3;j++){
            s+=arr[j];
        }
        if(s==k){
            cout<<"true"<<endl;
        }
        else{
            //cout<<"false"<<endl;
        }
        s=0;
    }
=======
#include <chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[10]={2,7,6,4,1,3,8,9,0,10};
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(j>i){
        cout<<arr[i]<<" "<<arr[j]<<" ";
        i++;
        j--;
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
>>>>>>> dd456cfac6743622110f56861b31f1475cc7e159
}