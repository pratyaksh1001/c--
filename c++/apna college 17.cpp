#include <iostream>
using namespace std;

int main(){
    int n=10;
    int arr[n]={1,3,5,7,9,0,3,4,5,6};
    int m=0;
    for(int i=0;i<n;i++){
        int x=arr[i+1]-arr[i];
        int c=0;
        for(int j=i;j<n;j++){
            if(arr[j]-arr[j-1]==x){
                c++;
                //cout<<arr[j]<<" ";
            }
            else if(j==i){
                c++;
                //cout<<arr[j]<<" ";
            }
            else{
                break;
            }
            if(m<c){
                m=c;
            }
        }
        //cout<<endl;
    }
    cout<<"the largest length is: "<<m;
}