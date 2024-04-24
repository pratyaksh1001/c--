#include <stdio.h>
    
int main(){
    char str[]="hello wodrld";
    int n=strlen(str);
    char str2[]="";
    int n2=0;
    char res[]={};
    int g=0;
    for(int i=0;i<n;i++){
        int f=0;
        for(int j=n-1;j>=0;j--){
            if(str[i]==str[j]){
                f++;
            }
        }
        if(f==1){
            printf("%c",str[i]);
            res[g]=str[i];
                g++;
        }
        else{
            str2[n2]=str[i];
            n2++;
            int f2=0;
            for(int k=0;k<n2;k++){
                if(str[i]==str2[k]){
                    f2++;
                }
            }
            if(f2==1){
                printf("%c",str[i]);
                res[g]=str[i];
                g++;
            }
        }
    }
}