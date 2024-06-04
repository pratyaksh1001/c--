#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    int marks;
    char name[16];
};

int main(){
    struct student arr[2];
    char temp[15];
    int t;
    for(int i=0;i<2;i++){
        scanf("%d%d %s",&arr[i].roll,&arr[i].marks,arr[i].name);
    }

    for(int i=2;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j].marks>arr[j+1].marks){
                /*struct student t=arr[j];
                arr[j]=arr[j+1];
                arr[j]=t;*/
                strcpy(temp,arr[j].name);
                strcpy(arr[j].name, arr[j+1].name);
                strcpy(arr[j+1].name, temp);

                t = arr[j].roll;

            }
        }
    }
    printf("after sorting\n");
    for(int i=0;i<2;i++){
        printf("%d %d %s\n",arr[i].roll,arr[i].marks,arr[i].name);
    }
}