#include <iostream>
#include <algorithm>
using namespace std;

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
void traversal1(node* top){
//tree
//L -> Root -> R
     if(top->l==NULL && top->r==NULL){
          cout<<top->data<<endl;
     }
     
     else{
          if(top->l!=NULL){
               cout<<top->data<<endl;
               traversal1(top->l);
          }
          if(top->r!=NULL){
               //cout<<top->data<<endl;
               traversal1(top->r);
          }

     }
}

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

int main(){
     int n=10;
     int arr[n]={7,4,5,6,2,3,8,9,0,11};
     sort(arr,arr+n);
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     cout<<binary(n,arr,0,n-1,9)<<endl;
}