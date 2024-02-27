#include <iostream>
<<<<<<< HEAD
using namespace std;

/*
The cost of stock on each day is given in an array A[] of size N. Find all the segments of days on which you buy and sell the stock such that the sum of difference between sell and buy prices is maximized. Each segment consists of indexes of two elements, first is index of day on which you buy stock and second is index of day on which you sell stock.
*/

int main(){
    int n=7;
    int arr[n]={100,180,260,310,40,535,695};
    int m=0;
    int low=1111111;
    int low_day;
    int high=0;
    int high_day;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]>arr[i]){
                if(arr[j]-arr[i]>m){
                    m=arr[j]-arr[i];
                    low=arr[i];
                    low_day=i;
                    high=arr[j];
                    high_day=j;
                }
            }
        }
    }
    printf("the purchasing price: %d\nthe purchasing day: %d\nthe selling price is: %d\nthe selling day is: %d\n",low,low_day,high,high_day);
    cout<<"the profit is: "<<m<<endl<<"the gap in days is: "<<high_day-low_day;
=======
#include <chrono>
#include <algorithm>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int arr[n]={6,1,2,9,8,4,5,2,0,10};
    int k=3;
    sort(arr,arr+n);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    int mid=n/2;
    for(int i=0;i<n;i++){
        if(i<=mid){
            arr[i]=arr[i]+k;
        }
        else{
            arr[i]=arr[i]-k;
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
>>>>>>> dd456cfac6743622110f56861b31f1475cc7e159
}