#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    int marks;
    char name[16];
};

int main(){
    struct student arr[5];
    for(int i=0;i<5;i++){
        scanf("%d %d %s",&arr[i].roll,&arr[i].marks,&arr[i].name);
    }
    for(int i=4;i<=0;i--){
        for(int j=0;j<i;j++){
            if(arr[i].roll<arr[j].roll){
                struct student t=arr[i];
                arr[i]=arr[j];
                arr[i]=t;
            }
        }
    }
    printf("\nafter sorting\n\n");
    for(int i=0;i<5;i++){
        printf("%d %d %s\n",arr[i].roll,arr[i].marks,arr[i].name);
    }
}
