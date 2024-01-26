#include <iostream>
using namespace std;

int func1(int x){
    int i=x;
    int y=i*i;
    return y;
}
int main(){
    int arr[]={1,2,3,4,5};
    for(int j: arr){
        cout<<func1(j)<<endl;
    }
}