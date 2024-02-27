#include <iostream>
<<<<<<< HEAD
#include <string>
using namespace std;

int main(){
    string s;
    getline (cin,s);
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            c++;
        }
    }
    s+='.';
    string arr[c+1];
    string arr2[c+1];
    string t="";
    int x=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='.'){
            t+=s[i];
        }
        else if(s[i]=='.' || i==s.length()-1){
            arr[x]=t;
            x++;
            t="";
        }
    }
    
    for(int i=0;i<c+1;i++){
        arr2[i]=arr[c-i];
    }
    for(int j=0;j<c+1;j++){
        cout<<arr2[j]<<".";
    }
=======
#include <algorithm>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int main(){
    int n=10;
    int x=11;
    int arr[n]={8,3,4,6,7,8,2,7,9,10};
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    while(true){
        if(arr[i]+arr[j]>x){
            j--;
        }
        else if(arr[i]+arr[j]<x){
            i++;
        }
        else if(arr[i]+arr[j]==x){
            cout<<arr[i]<<" + "<<arr[j]<<" = "<<x<<endl;
            break;
        }
        else if(i==j){
            cout<<"solution not possible"<<endl;
            break;
        }
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
>>>>>>> dd456cfac6743622110f56861b31f1475cc7e159
}