/*solving rain trapping problem*/

#include <iostream>
using namespace std;

int main(){
    int n=20;
    int arr[20]={9,4,5,6,8,9,2,3,6,1,9,0,4,5,3,1,8,2,7,5};
    int res[20]={0};
    int l[20]={0};
    int r[20]={0};
    int ml=0;
    int mr=0;
    for(int i=0;i<n;i++){
        if(arr[i]>ml){
            ml=arr[i];
            l[i]=ml;
        }
        l[i]=ml;
        if(arr[n-i-1]>mr){
            mr=arr[n-i-1];
            r[i]=mr;
        }
        r[n-i-1]=mr;
    }
    /*for(int j=0;j<n;j++){
        cout<<l[j]<<" ";
    }
    cout<<endl;
    for(int k=0;k<n;k++){
        cout<<r[k]<<" ";
    }*/
    int water=0;
    for(int j=0;j<n;j++){
        cout<<(min(l[j],r[j]))-arr[j]<<" ";
        res[j]=(min(l[j],r[j]))-arr[j];
        water+=(min(l[j],r[j]))-arr[j];
    }
    cout<<endl<<"the total water is: "<<water;
    }