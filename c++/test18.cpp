#include <iostream>
using namespace std;

int insert(int arr[],int s){
    int p;
    int e;
    cout<<"enter the position at which yoou want to add the element: ";
    cin>>p;
    cout<<"enter the element that you want to insert: ";
    printf("hello %d",10);
    cin>>e;
    int arr2[s];
    for(int i=0;i<s;i++){
        if(i==p){
            arr2[i+1]=arr[i];
            arr2[i]=e;
        }
        else if(i>p){
            int temp=arr[i+1];
            arr2[i+1]=arr[i];
        }
        else{
            arr2[i]=arr[i];
        }
    }
    
    for(int h=0;h<s+1;h++){
        cout<<arr2[h]<<" ";
    }
}


int main(){
    int n;
    cout<<"enter the number of terms in array: ";
    cin>>n;
    int l[n];
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the number that you want to add: ";
        cin>>x;
        l[i]=x;
    }
    insert(l,n);
}