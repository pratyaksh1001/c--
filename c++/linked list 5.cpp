//doubly linked list

#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
int athead(node* head,node* x){
    head->prev=x;
    x->next=head;
}
int attail(node* tail,node* x){
    tail->next=x;
    x->prev=tail;
}
int traverse(node* head){
    while(true){
        if(head->next!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        else{
            cout<<head->data<<endl;
            break;
        }
    }
}
int revtraverse(node* tail){
    while(true){
        if(tail->prev!=NULL){
            cout<<tail->data<<" ";
            tail=tail->prev;
        }
        else{
            cout<<tail->data<<endl;
            break;
        }
    }
}



int main(){
    node a1(10);
    node a2(20);
    node a3(30);
    node a4(40);
    node a5(50);
    attail(&a1,&a2);
    attail(&a2,&a3);
    attail(&a3,&a4);
    attail(&a4,&a5);
    traverse(&a1);
    revtraverse(&a5);
    
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}