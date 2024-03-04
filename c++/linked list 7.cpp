#include <iostream>
#include <chrono>
using namespace std;
auto start = chrono::steady_clock::now();

class node{
    public:
    int data;
    node* next;
    node(int x){
        this->data=x;
        this->next=NULL;
    }
};

int attail(node* tail,node* x){
    tail->next=x;
    x->next=NULL;
}

int insertion(node* pre,node* x,node* post){
    pre->next=x;
    x->next=post;
}

void traverse(node* head){
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
    node a3(30);
    node a4(40);
    node a5(50);
    node test(111);
    attail(&a1,&a2);
    attail(&a2,&a3);
    attail(&a3,&a4);
    attail(&a4,&a5);
    insertion(&a2,&test,&a3);
    traverse(&a1);

cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}