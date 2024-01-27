#include <stdio.h>

int main(){
    /*
    int a,b;
    printf("enter the numbers");
    scanf("%d %d",&a,&b);
    a>b?printf("%d is greater",a):printf("%d is greater",b);
    */
   int a,b,c;
   printf("enter the numbers");
   scanf("%d %d %d",&a,&b,&c);
   if(a>b){
    if(a>c){
        printf("%d is greatest",a);
    }
    else{
        printf("%d is greatest",c);
    }
   }
   else{
    if(b>c){
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest",c);
    }
   }
}