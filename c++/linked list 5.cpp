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

int nthnode(node* head,int n){
    int i=0;
    while(head!=NULL){
        
        if(i==n){
            cout<<head->data<<" ";
        }
        i++;
        head=head->next;
    }
}

int revnthnode(node* tail,int n){
    int i=0;
    while(tail->next!=NULL){
        if(i==n){
            cout<<tail->data<<" ";
        }
        i++;
        tail=tail->prev;
    }
}

int count(node* head){
    int n=0;
    while(true){
        if(head->next!=NULL){
            n++;
            head=head->next;
        }
        else{
            n++;
            break;
        }
    }
    return n;
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
    nthnode(&a1,3);
    revnthnode(&a5,3);
    cout<<endl<<count(&a1)<<endl;
    
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}