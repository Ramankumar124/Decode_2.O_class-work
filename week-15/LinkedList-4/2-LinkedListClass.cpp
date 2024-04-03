#include<iostream>
using namespace std;
class Node{
    public:

      int data;
      Node* prev;
      Node* next;
        Node(int data){
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
};

class DoublyLinkedList
{ // user defined data stucture
public:
    Node *Head;
    Node *tail;
    int size;
   
    DoublyLinkedList()
    {
        Head = tail = NULL;
        size = 0;
    }
    // insert at end
    // void insertAtTail(int value)
    // {
    //     Node *temp = new Node(value);
    //     if (size > 0)
    //     {
    //         tail->next = temp;
    //         tail->prev=tail;// extra line added 
    //         tail = temp;
    //     }
    //     else
    //         Head = tail = temp;

    //  size++;
    // }
      void insertAtTail(int value)
    {
        Node *temp = new Node(value);
        if (size == 0)  Head = tail = temp;
      else  {
            tail->next = temp;
            tail->prev=tail;// extra line added 
            tail = temp;
      }       

     size++;
    }


    void insertAtHead(int value)
    {
        Node *temp = new Node(value);
        if (size > 0)
        {
            temp->next = Head;
            temp->prev=temp;
            Head = temp;
        }
        else
            Head = tail = temp;
        size++;
    }
    void insertAt(int idx, int value)
    {
        if (idx == 0)
        {
            insertAtHead(value);
            return;
        }
        else if (idx == size)
        {
            insertAtTail(value);
            return;
        }
        else if (idx < 0 || idx > size)
        {
            cout << "Invalid Index" << endl;
            return;
        }
        else
        {
            Node *t = new Node(value);
            Node *temp = Head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev=temp;
            t->next->prev=t;
            size++;
        }
    }
    int getAtIdx(int idx)
    {
        if (idx == 0)
            return Head->data;
        else if (idx == size)
            return tail->data;
    else if (idx < 0 || idx > size)
        {
            cout << "Invalid Index" << endl;
            return 0;
        }
        else
        {  Node* temp=Head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->data;
        }
    }
    void deleteAtHead(){
        if(size==0) {cout<<"linked List is empty";
        return ;
        }
  if(size==1) Head=tail=NULL;
        else{
            Head=Head->next;
        if(Head!=NULL)    Head->prev=NULL;
        if(Head==NULL) tail=Head;
        }
       
    }
void deleteAtTail() {
    if (size == 0) {
        cout << "Linked List is empty" << endl;
        // return;
    } 
    // else if (size == 1) {
    //     deleteAtHead();
    //     return;
    // }
     else {
        // Node* temp = tail->prev;
        tail=tail->prev;
        tail->next = NULL; // Update the next pointer of the new tail
        // delete tail; // Delete the current tail node
        // tail = temp; // Update the tail pointer    
        size--;
    }
}


    void deleteAtIdx(int idx){
        if(idx<0 || idx>size) cout<<"Invalit index";
        else if(idx==0){ 
            deleteAtHead();
            return;
            }
        else if(idx==size){
            deleteAtTail();
            return;
        }  
        else{
            Node* temp=Head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
          
            size--;
        }  
    }
    // display at front
    void display()
    {
        Node *temp = Head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    DoublyLinkedList ll;
   
   ll.insertAtTail(10);
   ll.insertAtTail(20);
   ll.insertAtTail(30);
   ll.display();
   ll.insertAtTail(40);// insert at tail
   ll.insertAt(2,50); // insert at idx
    ll.display();
   ll.deleteAtHead(); // delte the head
    ll.display();
    //Todo
//   ll.deleteAtTail();
// ll.display();
ll.deleteAtIdx(2);
  ll.display();
  return 0;
}