#include <stdio.h>
#include <string.h>
int main(){
    char str[]="asdfghjhgfdsa11         11112222333444555sdfghjoiuytrgnfskjghkjsgh            -=%^_)(*&^%$#@)";
    int n=strlen(str);
    int arr[256]={0};
    for(int i=0;i<256;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(str[j]==i){
                c++;
            }
        }
        arr[i]=c;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0){
            printf("%c - %d\n",i,arr[i]);
        }
    }
}