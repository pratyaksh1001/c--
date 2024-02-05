/*
30th jan 2024 the day is tuesday kindly find the day on 30th jan 2030
*/
//approach 1
#include <iostream>
#include <string>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int main(){
    string arr[8]={"","monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    int year;
    int date;
    int month;  
    int x=0;
    int year2;
    printf("enter the year: ");
    scanf("%d-%d-%d",&date,&month,&year);  
    for(int i=1;i<=month;i++){
        if(i==2){
            if(year%4==0 && year%100!=0){
                x+=29;
            }
            else{
                x+=28;
            }
        }
        else if(i==month){
            x+=date;
        }
        else if(i%2==1){
            x+=31;
        }
        else{
            x+=30;
        }
    }
    cout<<"the day is: "<<arr[(x%7)]<<endl;
    printf("enter the second year: ");
    scanf("%d",&year2);
    if(year2>year){
        cout<<"the day in second year is: "<<arr[((x%7))+(((year2-year)*365)%7)];
    }
    else{
        cout<<"the day in second year is: "<<arr[(x%7)+(7-((year-year2)*365)%7)];
    }

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}