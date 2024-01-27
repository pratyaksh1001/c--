//rod cutting
//we have to find the maximum cost possible for the rod of given length
#include <iostream>
using namespace std;

int cut(int length[],int cost[],int l,int x,int y,int c){
    int price=0;
    if((y+length[c])<=l){
        y+=length[c];
        price+=cost[c];
        
    }
}

int main(){
    int length[8]={1,2,3,4,5,6,7,8};
    int cost[8]={1,5,6,9,11,12,14,16};
    int l=8;
}