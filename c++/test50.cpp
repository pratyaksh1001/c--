#include <iostream>
#include <algorithm>
using namespace std;

class node{
     public:
     string data;
     node* l=NULL;
     node* r=NULL;
     node* root=NULL;
     node(string d){
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

void traverseback(node* bottom){
     if(bottom->root==NULL){
          return;
     }
     cout<<bottom->l->data<<" ";
     cout<<bottom->r->data<<" ";
     traverseback(bottom->root);
}

void traversal2(node* top){
     if(top->l==NULL && top->r==NULL){
          traverseback(top);
     }
     else if(top->l==NULL && top->r!=NULL){
          traversal2(top->r);
     }
     else if(top->l!=NULL && top->r==NULL){
          traversal2(top->l);
     }
     else{
          traversal2(top->l);
          traversal2(top->r);
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
     node top1("top");
     node l2("L-1");
     node r2("R-1");
     node ll3("LL-2");
     node lr3("LR-2");
     node rl3("RL-2");
     node rr3("RR-2");
     top1.left(&l2);
     top1.right(&r2);
     l2.left(&ll3);
     l2.right(&lr3);
     r2.right(&rr3);
     r2.left(&rl3);
     traversal1(&top1);
}