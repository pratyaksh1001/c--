#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();
//implement stack using an array
int push(int arr[],int s,int x){
    arr[s]=x;
    s++;
    return s;
}

int pop(int arr[],int s){
    s--;
    return s;
}
void traverse(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n=10;
    int arr[n];
    int s=0;
    s=push(arr,s,10);
    s=push(arr,s,20);
    s=push(arr,s,50);
    traverse(arr,s);
    s=push(arr,s,90);
    s=pop(arr,s);
    s=pop(arr,s);
    traverse(arr,s);


cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}