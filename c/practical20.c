#include <stdio.h>
int sum(int x,int y){
     int r=x+y;
     return r;
}

int main(){
     int arr[3][3]={
          {1,2,3},
          {5,6,7},
          {8,9,0}
     };
     for(int i=0;i<3;i++){
          for(int j=0;j<3;j++){
               printf("%d ",arr[i][j]);
          }
          printf("\n");
     }
}