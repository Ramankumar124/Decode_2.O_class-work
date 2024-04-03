#include <iostream>
using namespace std;

class Node
{ // user defined data type
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

class LinkedList
{ // user defined data stucture
public:
    Node *Head;
    Node *tail;
    int size;
    LinkedList()
    {
        Head = tail = NULL;
        size = 0;
    }
    // insert at end
    void insertAtTail(int value)
    {
        Node *temp = new Node(value);
        if (size > 0)
        {
            tail->next = temp;
            tail = temp;
        }
        else
            Head = tail = temp;
        size++;
    }

    void insertAtHead(int value)
    {
        Node *temp = new Node(value);
        if (size > 0)
        {
            temp->next = Head;
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
        if(size==0) cout<<"linked List is empty";
        if(size==1) Head=tail=NULL;
        else{
            Head=Head->next;
             size--;
        }
       
    }
    void deleteAtTail(){
          if(size==0) cout<<"linked List is empty";
        if(size==1) Head=tail=NULL;
        Node*temp=Head;
      while(temp->next!=tail){
        temp=temp->next;
      }
      temp->next=NULL;
      tail=temp;
        size--;
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

int main()
{
    LinkedList ll;
    ll.insertAtTail(12);
    ll.insertAtTail(13);
    ll.insertAtTail(23);
    ll.display();

    ll.insertAtHead(3);
    ll.display();
    ll.insertAt(2, 4);
    ll.display();
   cout<< ll.getAtIdx(2)<<endl;
   ll.deleteAtHead();
   ll.display();
   cout<<ll.size<<endl;
   ll.deleteAtTail();
   ll.display();
   ll.deleteAtIdx(1);
    ll.display();
    return 0;
}