#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        arr[i]=x;
    }
    int l=0,t=0,s=10000;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            t=l;
            l=arr[i];
        }
        if(arr[i]<s){
            s=arr[i];
        }
    }
    printf("second largest is: %d\n",t);
    printf("smallest is: %d\n",s);
}