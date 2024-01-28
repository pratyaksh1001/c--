#include <iostream>
#include <chrono>
#include <algorithm>
#include <math.h>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[10]={4,5,6,7,8,3,2,1,8,9};
    sort(arr,arr+n);
    for(int k=n-1;k>=0;k--){
        for(int j=0;j<=n;j++){
            for(int i=j+1;i<=n;i++){

               
                if(pow(arr[k],2)==pow(arr[i],2)+pow(arr[j],2)){
                     printf("%d = %d + %d",arr[k]*arr[k],arr[i]*arr[i],arr[j]*arr[j]);
                }
            }
        }
    }
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}