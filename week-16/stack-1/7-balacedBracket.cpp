#include<iostream>
#include<stack>
#include<string>
using namespace std;
// pura code shi hai vas true false karke dekh lena


int main(){

string s=")()(";

int n=s.size();
stack<char> st;

for(int i=0;i<n;i++){
   if(s[i]=='(') st.push('(');
   if(st.size()==0 && s[i]==')'){
    cout<<"Invalid";
    break;
   }
   else if(s[i]==')'){
   if(st.top()=='(') st.pop();
   }
}
if(st.size()==0) cout<<"yes bracket are balanced";
else cout<<"no bracket  balanced";


    return 0;
}