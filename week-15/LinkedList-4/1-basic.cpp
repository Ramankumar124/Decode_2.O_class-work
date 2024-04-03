#include<iostream>
using namespace std;
class Node{
    public:

      int val;
      Node* prev;
      Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};

void display(Node *head) { 

    while(head!=NULL){
        cout<<head->val<<" ";
       head= head->next;
    }
}

void displayRev(Node* tail){
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
}
void displayRec(Node* head){
    if(head==NULL) return ;
    cout<<head->val<<" ";
     displayRec(head->next);
}
void displayRecReverse(Node* head){
    if(head==NULL) return ;
     displayRecReverse(head->next);
    cout<<head->val<<" ";
}

int main(){

Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(30);
Node* d=new Node(40);
Node* e=new Node(50);

// setting forward  links 

a->next=b;
b->next=c;
c->next=d;
d->next=e;

// setting backward link for each node.
e->prev=d;
d->prev=c;
c->prev=b;
b->prev=a;

// when we pass head
display(a);
cout<<endl;
displayRec(a);// display using recursion
cout<<endl;
displayRecReverse(a);// reverse with recursion
cout<<endl;
displayRev(e);// revese using tail
    return 0;
}