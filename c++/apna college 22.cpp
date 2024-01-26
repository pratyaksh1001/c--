#include <iostream>
using namespace std;

int main(){
    char arr[100];
    int n;
    cout<<"enter the number of words: ";
    cin>>n;
    cout<<"enter the word: ";
    cin>>arr;
    bool a=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            a=0;
        }
    }
    if(a){
        printf("the given  string %s is a palindrome",arr);
    }
    else{
        printf("the given  string %s is not a palindrome",arr);
    }
}