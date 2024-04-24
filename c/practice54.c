#include <stdio.h>

int main(){
    char str[]="hello world";
    int len[sizeof(str)]={0};
    for(int i=0;i<sizeof(str);i++){
        for(int j=0;j<sizeof(str);j++){
            if(str[i]==str[j]){
                len[i]+=1;
            }
        }
    }
    for(int x=0;x<sizeof(str);x++){
        printf("%c -> %d\n",str[x],len[x]);
    }
}