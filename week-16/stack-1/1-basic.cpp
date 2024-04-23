#include<iostream>
#include<stack>
using namespace std;

int main(){

stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
cout<<"size of stack is"<<st.size()<<endl;


// printing is reverse order

// while(st.size()>0){
//     cout<<st.top()<<" ";
//     st.pop();
// }// par humne original stack khali kr dia


// we will use extra stack

// filling temp in reveres order
stack<int> temp;
while(st.size()>0){
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    temp.push(x);
}
//putting element back to origianl stack in correct manner
while(temp.size()>0){
    int x=temp.top();
    temp.pop();
    st.push(x);
}
cout<<"top value after insertion "<<st.top();
    return 0;
}