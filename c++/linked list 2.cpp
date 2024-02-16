#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int data){
        this -> data=data;
        this -> next=NULL;
    }
};
void insertathead(node* &head,int data){
    node* temp=new node(data);
    temp -> next=head;
    head=temp;
}

void printlist(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp -> data <<" ";
        temp=temp -> next; 
    }
}

void insertattail(node* &tail,int data){
    node* temp=new node(data);
    tail=temp->next;
}

int main(){
    node* node2 = new node(10);
    node* head=node2;
    node* tail=node2;
    //insertathead(head,20);
    //insertathead(head,12);
    insertathead(head,12);
    insertattail(tail,200);
    printlist(head);
    //node* node1 = new node(20);
    //cout << node2 -> data<<endl;
    //cout<< node2 -> next<<endl;
}