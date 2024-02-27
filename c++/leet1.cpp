#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
*/

int main(){
    int n=10;
    int arr[n]={0,2,3,3,9,5,4,1,7,4};
    int l;
    int r;
    int m=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            int x=min(arr[i],arr[j]);
            int v=x*(j-i);
            if(v>m){
                m=v;
                l=i;
                r=j;
            }
        }
    }
    printf("the container is from %d to %d with volume = %d",l,r,m);
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}