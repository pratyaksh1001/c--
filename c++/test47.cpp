#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

class node{
    int data;
    node* next;
    public:
    int start(int data){
        this->data=data;
        this->next=NULL;
    }
    int athead(node* head){
        head->next=this;
    }
    int printing(node* x){
        do{
            cout<<x->data<<" ";
            x=x->next;
        }
        while(x->next!=NULL);
    }
};

int main(){
    node head;
    head.start(10);
    node a;
    node b;
    a.start(20);
    b.start(30);
    a.athead(&head);
    b.athead(&a);
    head.printing(&head);

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}