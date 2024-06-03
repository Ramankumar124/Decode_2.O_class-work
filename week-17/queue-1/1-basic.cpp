#include<iostream>
#include<queue>
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

q.push(10);
q.push(20);
q.push(30);
q.push(40);
// cout<<q.front();
display(q);
q.pop();
cout<<endl;
// cout<<q.front();
display(q);
q.size();

    return 0;
}