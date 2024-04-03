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


int main(){
// setting data at every node
Node a(10);
Node b(20);
Node c(30);
Node d(40);

// formation linked lish

a.next=&b;
b.next=&c;
c.next=&d;
// cout<<a.next->val; // 20 (*a.next).val
// cout<<a.next->next->val; // c value
// cout<<a.next->next->next->val; // d value

Node temp=a;


// while(temp.next!=NULL){
//     cout<<temp.val<<" ";
//     temp= *(temp.next);
// }
 while(true){
     cout<<temp.val<<" ";
     if(temp.next==NULL)     break;
     
     temp= *(temp.next);
}
    return 0;
}