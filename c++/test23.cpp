//print the minimum and maximum sum of sub-arrays
#include <iostream>
using namespace std;

int main(){
    int arr[20]={5,6,-8,9,6,100,3,32,4,57,8,8,7,53,2,3,56,50,2,3};
    int max=-10000;
    for(int  i=0;i<20;i++){
        for(int j=i;j<20;j++){
            int s=0;
            for(int k=i;k<j;k++){
                s+=arr[k];
            }
            if(max<s){
                max=s;
            }
        }
    }
    cout<<"maximum is: "<<max<<endl;

}