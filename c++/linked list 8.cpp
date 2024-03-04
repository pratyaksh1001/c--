#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int x){
        this->data=x;
        this->next=NULL;
        this->prev=NULL;
    }
    int attail(node* x){
        this->next=x;
        x->prev=this;
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
    node a1(10);
    node a2(20);
    a1.attail(&a2);
    traverse(&a1);

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}