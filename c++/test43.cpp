#include <iostream>
using namespace std;

int main(){
    int arr[3][4]={
        {5,7,3,3},
        {1,3,8,8},
        {8,7,2,2},
    };
    int c=0;
    int s=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            s=0;
            for(int g=0;g<3;g++){
                for(int h=0;h<4;h++){
                    if(arr[i][j]==arr[g][h]){
                        if(i!=g && j!=h){
                            s++;
                        }
                    }
                }
            }
            if(s==0){
                c++;
            }
        }
    }
    cout<<"number of unique elements is: "<<c;
}