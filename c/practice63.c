#include <stdio.h>

int main(){
    char str[]="asdfghjhgfdsa1111112222333444555sdfghjoiuytr -=%^_)(*&^%$#@)";
    int arr[256]={0};
    for(int i=32;i<=126;i++){
        int c=0;
        for(int j=0;j<30;j++){
            if(str[j]==i){
                c++;
            }
        }
        arr[i]=c;
    }
    for(int i=32;i<=126;i++){
        if(arr[i]!=0){
            printf("%c - %d\n",i,arr[i]);
        }
    }
}