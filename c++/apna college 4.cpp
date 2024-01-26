//printing the primes in a given range

#include <iostream>
using namespace std;

int prime(int n){
    int flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<n<<endl;
    }
}

int main(){
    int a;
    int b;
    printf("enter the numbers: ");
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    for(int j=a;j<=b;j++){
        prime(j);
    }
}
