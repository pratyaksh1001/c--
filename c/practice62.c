#include <stdio.h>

struct book{
    char name[20];
    char author[20];
    int pages;
    int price;
};

void namesearch(struct book arr[]){
    char s[20];
    printf("enter the name of the book: ");
    scanf("%s",&s);
    printf("%s",s);
    for(int i=0;i<2;i++){
        if(arr[i].name==s){
            printf("name is: %s\nauthor is: %s\nprice is: %d\npages are: %d",arr[i].name,arr[i].author,arr[i].price,arr[i].pages);
        }
    }
}
int main(){
    struct book arr[2];
    int n=2;
    for(int i=0;i<n;i++){
        printf("enter the name of book: ");
        scanf("%s",&arr[i].name);
        printf("enter the name of author: ");
        scanf("%s",&arr[i].author);
        printf("enter the price of book: ");
        scanf("%d",&arr[i].price);
        printf("enter the pages of the book: ");
        scanf("%d",&arr[i].pages);
        printf("\n ");
    }
    namesearch(arr);
}