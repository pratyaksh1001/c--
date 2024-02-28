#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

//index of sub-array with given sum

int main(){
    int n=10;
    int arr[n]={7,3,5,6,7,1,2,0,9,6};
    int x=15;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<=j;k++){
                s+=arr[k];
            }
            if(s==x){
                printf("from %d to %d\n",i,j);
        }
        }
        
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}