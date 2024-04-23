#include<iostream>
#include<stack>
using namespace std;

void display(stack<int>& temp){
    while(temp.size()>0){
    cout<<temp.top()<<" ";
    temp.pop();}
}



int main(){
stack<int> st;
stack<int> temp;

st.push(10);
st.push(20);
st.push(30);
st.push(40);

display(st);
// push in reverse oder to temp stack
while(st.size()>0){
    temp.push(st.top());
    st.pop();
}

st.push(45);
while(temp.size()>0){
    st.push(temp.top());
    temp.pop();
}

display(st);

    return 0;
}