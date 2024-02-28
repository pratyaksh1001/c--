#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
     string code="123654";
     string arr[26];
     for(int i=0;i<26;i++){
          arr[i]='A'+i;
     }
     int x=code.length();
     int c=0;
     for(int i=0;i<x;i++){
          for(int j=i;j<x;j++){
               int f=-1;
               while(stoi(code.substr(i,j))<=26){
                    f+=stoi(code.substr(i,j));
               }
               c++;
          }
     }
     cout<<c;

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}
//int max=INT_MIN