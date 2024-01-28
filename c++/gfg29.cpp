//print the sub-array with a given sum
#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=10;
    int s=13;
    int t1=0;
    int t2=0;
    int arr[10]={3,4,6,7,8,9,3,2,3,2};
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            c=0;
            t1=i;
            t2=j;
            for(int k=i;k<=j;k++){
                c+=arr[k];
                //cout<<arr[k]<<" ";
            }
            //cout<<"\t"<<c<<endl;
            if(c==s){
                for(int x=t1;x<=t2;x++){
                    cout<<arr[x]<<" ";
                }
                cout<<endl;
                //break;
        }
        }
        
    }
    
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}