#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> temp){
    while(temp.size()>0){
    cout<<temp.top()<<" ";
    temp.pop();
    }
}

void pushAtIdx(stack<int>& st,int idx,int val){
    stack<int> temp;
while(st.size()>idx){
    temp.push(st.top());
    st.pop();
}
st.push(val);
while(temp.size()>0){
    st.push(temp.top());
    temp.pop();
}

}

int main(){
stack<int> st;


st.push(10);
st.push(20);
st.push(30);
st.push(40);

display(st);
cout<<endl;
// push in reverse oder to temp stack
pushAtIdx(st,2,45); //stack idx val
display(st);

    return 0;
}