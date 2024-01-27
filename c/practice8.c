#include <stdio.h>

int main(){
    int x,y;
    char a;
    printf("enter the statement: ");
    scanf("%d %d",&x,&y);
    printf("enter the operator: ");
    fflush(stdin); //used to remove the value stored in char already 
    scanf("%c",&a);
    switch(a){
        case '+':
        printf("%d",x+y);
        break;
        case '-':
        printf("%d",x-y);
        break;
        case '*':
        printf("%d",x*y);
        break;
        case '/':
        printf("%d",x/y);
        break;
        case '%':
        printf("%d",x%y);
        break;
        default:
        printf("enter a valid statement");
    }
}