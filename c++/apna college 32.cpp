//Sieve of Eratosthenes
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[1001]={0};
    int f[1001];
    for(int i=1;i<1001;i++){
        arr[i]=i;
        }
    for(int j=2;j<101;j++){
        for(int k=(j*j);k<1001;k+=j){
            if(arr[k]%arr[j]==0){
                arr[k]=-1;
            }
        }
    }
    int x=0;
    for(int h=1;h<1001;h++){
        if(arr[h]!=-1){
            f[x]=arr[h];
            x++;
            cout<<arr[h]<<" ";
        }
    }
}
