#include<iostream>
#include<stack>
using namespace std;

int main(){

stack<int> st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);

stack<int> temp;
while(st.size()>0){
    // cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    temp.push(x);
}
// putting throw 3rd stack
stack<int> c;
while(temp.size()>0){
    int x=temp.top();
    c.push(x);
    temp.pop();
}

//again putting t0 1
while(c.size()>0){
    int x=c.top();
    c.pop();
    st.push(x);
}
cout<<"top value of 1st stack in reverse  "<<st.top();
    return 0;
}