#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
    int n,a,r;
    cout<<"enter the n,a,r: ";
    scanf("%d %d %d",&n,&a,&r);
    
    for(int i=1;i<=n;i++){
        a*=r;
        cout<<a<<endl;
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}