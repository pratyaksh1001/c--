#include<stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("enter the length of word ");
    scanf("%d",&n);
char i[n+1];
for(int k=0;k<10;k++){
    scanf("%c",&i[k]);
    if(i[k]=='\n'){
        break;
    }
}
for(int j=0;j<5;j++){
    if(i[j]>='a' && i[j]<='z'){
        printf("%c",i[j]-32);
    }
    else if(i[j]>='A' && i[j]<='Z'){
        printf("%c",i[j]+32);
    }
}
}