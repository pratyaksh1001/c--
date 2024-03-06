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
    int attail(node* x){
        this->next=x;
        x->prev=this;
    }
    int athead(node* x){
        this->prev=x;
        x->next=this;
    }
};
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

int main(){

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}