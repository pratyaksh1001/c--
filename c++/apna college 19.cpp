//print the first number that is repeated in an array with the smallest index
#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    cout<<x;
    int arr[10]={0,5,6,8,1,2,9,5,4,3};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    cout<<arr[j]<<endl;
                    return arr[j];
                }
            }
        }
    }
}