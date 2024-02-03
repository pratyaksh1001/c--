/*
Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.
Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.
*/
#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n=6;
    string arr[n]={"0900", "0940", "0950", "1100", "1500", "1800"};
    string dep[n]={"0910", "1200", "1120", "1130", "1900", "2000"};
    int arr1[n];
    int dep1[n];
    for(int i=0;i<n;i++){
        string t1=arr[i].substr(0,2);
        string t2=arr[i].substr(2,2);
        int temp1=(60*stoi(t1)+stoi(t2));
        arr1[i]=temp1;
        string t3=dep[i].substr(0,2);
        string t4=dep[i].substr(2,2);
        int temp2=((60*stoi(t3))+stoi(t4));
        dep1[i]=temp2;
    }
    for(int j=0;j<n;j++){
        cout<<arr1[j]<<" ";
    }
    cout<<endl;
    for(int k=0;k<n;k++){
        cout<<dep1[k]<<" ";
    }
    //int arr1[n] = {900, 940, 950, 1100, 1500, 1800};
    //int dep1[n] = {910, 1200, 1120, 1130, 1900, 2000};
    
    int m=1;
    for(int j=0;j<n;j++){
        int c=1;
        for(int k=j+1;k<n;k++){
            if(dep1[j]>arr1[k]){
                c++;
            }
        }
        if(m<c){
            m=c;
        }
    }
    cout<<endl<<m;
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}