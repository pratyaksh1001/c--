//print the sub-array whose sum is equal to input

#include <iostream>
using namespace std;

int main(){
    int n=20;
    int s=12;
    int arr[n]={1,6,8,0,3,2,5,7,9,5,3,2,1,7,8,9,0,6,5,4};
    for(int i=0;i<n;i++){
        int m=0;
        for(int j=i;j<n;j++){
            m+=arr[j];
            if(m==s){
                for(int k=i;k<=j;k++){
                    cout<<k<<":"<<arr[k]<<endl;
                }
                return 0;
            }
        }
        
    }

}