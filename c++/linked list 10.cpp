//failed attempt to merge two sorted linked list
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
    int attail(node* tail){
        this->next=tail;
    }
};
int merge(node* first,node* second,node* final){
    while(true){
        if(first!=NULL && second!=NULL){
            if(first->data>second->data){
                final->data=first->data;
                first=first->next;
                final=final->next;
            }
            else{
                final->data=second->data;
                second=second->next;
                final=final->next;
            }
        }
        else if(first!=NULL && second==NULL){
                final->data=first->data;
                first=first->next;
                final=final->next;
        }
        else if(first==NULL && second!=NULL){
                final->data=second->data;
                second=second->next;
                final=final->next;
        }
        else if(first==NULL && second==NULL){
            final->next=NULL;
            break;
        }
    }
}
int traverse(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    node a1(1);
    node a2(3);
    node a3(5);
    node a4(7);
    node a5(9);

    node b1(2);
    node b2(4);
    node b3(5);
    node b4(6);
    node b5(7);
    node b6(11);

    node result(0);

    a1.attail(&a2);
    a2.attail(&a3);
    a3.attail(&a4);
    a4.attail(&a5);

    b1.attail(&b2);
    b2.attail(&b3);
    b3.attail(&b4);
    b4.attail(&b5);
    b5.attail(&b6);

    traverse(&a1);
    traverse(&b1);
    merge(&a1,&b1,&result);
    traverse(&result);

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}