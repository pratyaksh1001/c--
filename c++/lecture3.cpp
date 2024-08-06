#include <iostream>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
        int r=left;
        for(int i=left+1;i<=right;i++){
            r=r&i;
        }
        return r;
    }

int main(){
    cout<<rangeBitwiseAnd(1,2147483647)<<endl;
}