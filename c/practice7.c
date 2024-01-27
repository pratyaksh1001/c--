#include <stdio.h>

int check(){
    int x;
    scanf("%d",&x);
    if(x>=0){
        printf("the number is +ve");
    }
    else{
        printf("the number is -ve");
    }
}
int add(){
    int x,y;
        printf("enter the numbers:");
        scanf("%d %d",&x,&y);
    int r=x+y;
    printf("the sum of %d + %d = %d",x,y,r);
}
int sub(){
    int x,y;
    printf("enter the numbers:");
        scanf("%d %d",&x,&y);
    int r=x-y;
    printf("the subtraction of %d - %d = %d",x,y,r);
}
int evenodd(int x){
    int x,y;
    printf("enter the numbers:");
        scanf("%d %d",&x,&y);
    if(x%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}
int main(){
    char a;
    printf("enter what you want to perform: ");
    scanf("%c",&a);
    switch (a)
    {
    case 'c':
        check();
        break;
    
    case 'e':
        evenodd()
        break;
    
    case 'a':
        add();
        break;
    case 's':
        sub();


}}