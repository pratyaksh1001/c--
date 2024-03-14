#include <iostream>
#include <algorithm>
using namespace std;

//binary search tree

class node{
     public:
     int data;
     node* l=NULL;
     node* r=NULL;
     node* root=NULL;
     node(int d){
          this->data=d;
     }
     void right(node* ex){
          this->r=ex;
          this->r->root=this;
     }
     void left(node* ex){
          this->l=ex;
          this->l->root=this;
     }
};

int binary(int n,int arr[],int low,int high,int key){
     int mid=(high+low)/2;
     if(high-low==0){
          return -1;
     }
     else{
          if(arr[mid]==key){
          return mid;
     }
     else if(arr[mid]>key){
          high=mid-1;
          binary(n,arr,low,high,key);
     }
     else if(arr[mid]<key){
          low=mid+1;
          binary(n,arr,low,high,key);
     }
     }
}
