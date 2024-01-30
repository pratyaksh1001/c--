#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int quick(int arr[],int n,int x,int y,int p){
    if(y-x==0){
        return 0;
    }
    int i=x;
    int j=y;
    while(true){
        if(arr[i]<arr[p]){
            i++;
        }
        else{
            if(arr[j]>arr[p]){
                j--;
            }
            else{
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
        if(i>j){
        int t2=arr[j];
        arr[j]=arr[p];
        arr[p]=t2;
        quick(arr,n,x+1,j-1,x);
        quick(arr,n,j+2,y,j+1);
        break;
    }
    }
    
}

int main(){
    int n=20;
    int arr[20]={4,3,6,7,8,9,5,4,1,2,7,65,34,12,89,65,345,12,44,50};
    quick(arr,n,1,n-1,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}