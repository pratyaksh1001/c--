#include <iostream>
using namespace std;

int main(){
    int arr[20]={4,6,5,3,2,2,7,9,6,4,2,6,5,78,65,3,4,5,9,0};
    int arr2[16];
    int x=0;
    while(x<16){
        int s=arr[x]+arr[x+1]+arr[x+2]+arr[x+3]+arr[x+4];
        arr2[x]=s;
        x++;
    }
    int max=0;    
    for(int i=0;i<16;i++){
        cout<<arr2[i]<<endl;
        if(max<arr2[i]){
            
            max=arr2[i];
            
        }
    }
    cout<<max;
}