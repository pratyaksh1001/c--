#include <iostream>
using namespace std;

int dlt(int arr[],int n,int e){
    for(int i=0;i<n;i++){
        if(arr[i]==e){

            for(int j=i+1;j<n;j++){
                arr[j-1]=arr[j];
            }
        }
    }
    for(int k=0;k<n-1;k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the number of terms: ";
    cin>>n;
    int arr[n];
    for(int l=0;l<n;l++){
        int x;
        cout<<"enter the number: ";
        cin>>x;
        arr[l]=x;
    }
    int p;
    cout<<"enter the number which you want to delete: ";
    cin>>p;
    dlt(arr,n,p);
}