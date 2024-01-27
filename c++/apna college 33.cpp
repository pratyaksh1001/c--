// finding prime factors using sieve of Eratosthenes
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number whose prime factors you want: ";
    cin>>a;
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
            //cout<<arr[h]<<" ";
        }
    }
    cout<<"the prime factor of "<<a<<" = ";
    int d=1;
    while(a>1){
        if(a%f[d]==0){
            cout<<f[d]<<" X ";
            a/=f[d];
        }
        else{
            d++;
        }
    }
    cout<<1;
}