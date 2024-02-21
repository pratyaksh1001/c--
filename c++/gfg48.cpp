#include <iostream>
#include <algorithm>
#include <chrono>
#include <cmath>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[10]={6,2,3,4,8,9,0,1,7,5};
    sort(arr,arr+n);
    int i1=0;
    int i2=1;
    int j=n-1;
    while(true){
        if(pow(arr[i1],2)+pow(arr[i2],2)<pow(arr[j],2)){
            i1++;
            i2++;
            if(i2==j){
                i1=0;
                i2=1;
                j--;
            }
        }
        else if(pow(arr[i1],2)+pow(arr[i2],2)==pow(arr[j],2)){
            printf("the triplet is: %d, %d, %d\n",i1,i2,j);
            break;
        }
        
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}