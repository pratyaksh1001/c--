#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

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
    node * temp=new node(data);
    temp -> next = head;
}

void printlist(node* &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp ->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* node1=new node(10);
    cout<<node1 -> data<<endl;

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}