#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int main(){
    int n=10;
    int arr[10]={6,7,9,3,2,4,6,7,5,1};
    int i=0;
    int j=n/2;
    int k=n-1;
    int s=12;
    while(true){
        if(arr[i]+arr[j]+arr[k]<s){
            if(i<j){
                i++;
            }
            else{
                j++;
            }
        }
        else if(arr[i]+arr[j]+arr[k]>s){
            if(j<k){
                k--;
            }
            else{
                j--;
            }
        }
        else{
            break;
        }
    }
    printf("%d + %d + %d = %d",arr[i],arr[j],arr[k],s);


cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}
