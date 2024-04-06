#include <stdio.h>

int main(){
     int n=3;
     int m=3;
     int mat1[3][3]={
          {5,6,7},
          {3,9,8},
          {1,2,3}
     };
     int mat2[3][3]={
          {4,2,3},
          {7,9,0},
          {4,8,7}
     };
     int sol[3][3];
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
               sol[i][j]=(mat1[i][j]*mat2[i][j]);
          }
     }
     for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
               printf("%d ",sol[i][j]);
          }
          printf("\n");
     }
}