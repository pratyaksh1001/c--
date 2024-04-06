#include <bits/stdc++.h>
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

void checkbst(node* head){
     if(head->l==NULL && head->r==NULL){
          cout<<"is a BST";
     }
     if(head->data<head->r->data && head->data>head->l->data){
          checkbst(head->l);
          checkbst(head->r);
     }
     else{
          cout<<"not a BST";
          return;
     }
}

int main(){
     node top1(10);
     node l2(5);
     node r2(20);
     node ll3(1);
     node lr3(100);
     node rl3(7);
     node rr3(300);
     top1.left(&l2);
     top1.right(&r2);
     l2.left(&ll3);
     l2.right(&lr3);
     r2.right(&rr3);
     r2.left(&rl3);
     checkbst(&top1);
}