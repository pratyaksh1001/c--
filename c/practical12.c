#include <stdio.h>

int main(){
     int n;
     printf("enter the number of terms: ");
     scanf("%d",&n);
     int t1=0;
     int t2=1;
     int t3=0;
     printf("%d\n%d\n",t1,t2);
     while(n-2>0){
          t3=t1+t2;
          t1=t2;
          t2=t3;
          n--;
          printf("%d\n",t3);
     }
}