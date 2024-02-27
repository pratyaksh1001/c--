#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int main(){
    int n=11;
    int arr[n]={100 ,80 ,600 ,70 ,60 ,75 ,185,200,678,222,3689};
    int f;
    for(int i=0;i<n;i++){
        f=0;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                f++;
            }
            else{
                break;
            }
        }
        printf("for %d the count is %d\n",arr[i],f);
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}