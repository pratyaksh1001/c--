#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
int traverse(node* head){
    while(true){
        if(head->next!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
        else{
            cout<<head->data;
            break;
        }
    }
}

int attail(node* head,node* x){
    head->next=x;
}

int athead(node* head,node* y){
    y->next=head;
}

int rmv(node* x){
    x->next=NULL;
}

int main(){
    node a(10);
    node b(20);
    node c(500);
    node d(30);
    node e(123);
    attail(&a,&c);
    attail(&c,&d);
    attail(&d,&b);
    athead(&a,&e);
    rmv(&d);
    traverse(&e);

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}