#include <iostream>
using namespace std;

int check(int arr[],int a,int b,int n){
    if(b==n){
        cout<<"the array is sorted";
        return 0;
    }
    if(arr[a]<arr[b]){
        check(arr,a+1,b+1,n);
    }
    else{
        cout<<"the array is unsorted";
    }

}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    check(arr,0,1,10-1);
}