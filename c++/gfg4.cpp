/*Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.
Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.*/
#include <iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n] = {900, 940, 950, 1100, 1500, 1800};
    int dep[n] = {910, 1200, 1120, 1130, 1900, 2000};
    int m=0;
    for(int i=0;i<n;i++){
        int o=1;
        for(int j=i+1;j<n;j++){
            if( dep[i]>arr[j]){
                o++;
            }
        }
        if(o>m){
            m=o;
        }
    }
    cout<<"the number of platforms required is: "<<m;
}