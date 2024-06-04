#include <stdio.h>

int main()
{
    int a,b,c;
    char med;
    printf("No. of classes attended: ");
    scanf("%d" , &a);

    printf("No. of classes held: ");
    scanf("%d" , &b);

    c= ((a/b)*100);

    if(c>=75){
        printf("Allowed");
    }
    if (c<75){
        printf("Medical reason or not: ");
        scanf("%c" , &med);
        if(med=='y' || med=='Y'){
            printf("Allowed");

        }
        if(med=='n' || med=='N'){
            printf("Not Allowed");
        }
        else{
            printf("Invalid");
        }
    }
    else{
        printf("Invalid");
    }


    return 0;
}