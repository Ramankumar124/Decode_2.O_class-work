#include<iostream>
#include<stack>
using namespace std;

void RevDisplayRec(stack<int> temp){
   if(temp.size()==0) {
    return;
   }
 
   int x=temp.top();
  
   cout<<x<<" ";
   temp.pop();
   RevDisplayRec(temp);
   temp.push(x); // used to matain the oriiganl stack
   // otherwise stack will become empty
}

void displayRec(stack<int> temp){
   if(temp.size()==0) {
    return;
   }
 
   int x=temp.top();
  
   temp.pop();
   displayRec(temp);
   cout<<x<<" ";
   temp.push(x); // used to matain the oriiganl stack
   // otherwise stack will become empty
}

int main(){
stack<int> st;


st.push(10);
st.push(20);
st.push(30);
st.push(40);

displayRec(st);
cout<<endl;
RevDisplayRec(st);

    return 0;
}