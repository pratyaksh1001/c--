//circular linked list

#include <iostream>
#include <chrono>
#include <string>
using namespace std;
auto start = chrono::steady_clock::now();

class node{
    public:
    string data;
    node* next;
    node* prev;
    node(string d){
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

int terminal(node* head,node* tail){
    tail->next=head;
    head->prev=tail;
}

int circulartraverse(node* head,int n){
    for(int i=0;i<n;i++){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int revcirculartraverse(node* tail,int n){
    for(int i=0;i<n;i++){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
}

int main(){
    node a1("first");
    node a2("second");
    node a3("third");
    node a4("fourth");
    node a5("fifth");
    attail(&a1,&a2);
    attail(&a2,&a3);
    attail(&a3,&a4);
    attail(&a4,&a5);
    terminal(&a1,&a5);
    //traverse(&a1);
    //revtraverse(&a5);
    circulartraverse(&a1,10);
    cout<<endl;
    revcirculartraverse(&a5,10);
    
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}