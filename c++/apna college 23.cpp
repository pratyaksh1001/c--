#include <iostream>
using namespace std;

int main(){
    int n=100;
    cin.ignore();
    char arr[n+1];
    cout<<"enter the sentence: ";
    cin.getline(arr,n);
    cin.ignore();
    int l=0;
    int i=0;
    int m=0;
    int s=0;
    int e=0;
    while(true){
        l++;
        if(arr[i]==' ' || arr[i]=='\0'){
            if(l>m){
                m=l;
                
            }
            l=0;            
        }
        else{

        }
        i++;
        if(arr[i]=='\0'){
            break;
        } 
    }
    cout<<m;
}