// reverse the queue using stack

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){

for(int i=0;i<q.size();i++){
    int val=q.front();
    cout<<val<<" ";
    q.pop();
    q.push(val);
    
}
}
int main(){

queue<int> q;
stack<int> st;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
cout<<" Before Revsere";
display(q);

while(q.size()>0){
    st.push(q.front());
    q.pop();
}
while(st.size()>0){
    q.push(st.top());
    st.pop();
}
cout<<" After Reverse";
display(q);

    return 0;
}