#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("enter the number");
    scanf("%d",a);
    b=a;
    while(a>0)
    {
    c=a%10;
    d=(c*c*c)+d;
    a=a/10;}
   if  (a==b){
    printf("a is an armstrong number");
   }
    else{
        printf("a is not");
    }
    return 0;
   
}