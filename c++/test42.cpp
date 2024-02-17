#include <iostream>
using namespace std;

int main(){
    int arr_1[3][4]={
        {5,4,7,4},
        {1,2,3,4},
        {8,7,6,5}
    };
    int arr_2[4][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr_2[j][i]=arr_1[i][j];
        }
        cout<<endl;
    }
    for(int h=0;h<4;h++){
        for(int g=0;g<3;g++){
            cout<<arr_2[h][g]<<" ";
        }
        cout<<endl;
    }
}
/*
5 1 8
4 2 7 
7 3 6
4 4 5
*/