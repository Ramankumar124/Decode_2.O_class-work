#include<iostream>
using namespace std;

class Node{
    public:
    int val;
Node* next;
    
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class Stack{
    public:
    Node* head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }

    void push(int val){
        Node* temp= new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
void pop(){
     if(head==NULL) {
        cout<<"stack is empty";
        return;
     }
     head=head->next;
     size--;
}

int top(){
     if(head==NULL) {
        cout<<"stack is empty";
        return -1;
     }
    cout<<head->val;
     
}
};
int main(){

Stack st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);

cout << "\nTop element of the Stack: ";
st.top();
st.pop();
st.pop();
st.top();

    return 0;
}