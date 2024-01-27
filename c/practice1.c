#include <stdio.h>

int main(){
    int a[10]={0};
    int n,c;
    c=0;
    printf("enter the number: ");

    scanf("%d",&n);
    for(int i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
        c++;
    }
    printf("the binary representation of the number is: ");
    for(int j=c;j>=0;j--){
        printf("%d",a[j]);
    }
}