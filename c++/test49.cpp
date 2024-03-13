#include <iostream>
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

void traverseback(node* top){
     cout<<top->data<<" ";
     if(top->r==NULL && top->l==NULL){
          traverseback(top->root);
     }
}

void traversal2(node* top){
     if(top->l!=NULL){
          traversal2(top->l);
          cout<<top->data<<" ";
     }
     if(top->r!=NULL){
          traversal2(top->r);
          cout<<top->data<<" ";
     }
     if(top->l==NULL && top->r==NULL){
          traverseback(top);
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