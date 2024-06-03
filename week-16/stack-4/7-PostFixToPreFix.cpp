#include<iostream>
#include<stack>
#include<string>
using namespace std;

string solve(string val1, string val2, char ch)
{
   string ans="";
   ans.push_back(ch);// only order change kia
   ans+=val1;
   ans+=val2;
   return ans;
}
int main(){

string s="79+4*8/3-";

stack<string> val;

for(int i=0;i<s.size();i++){
    if(s[i]>=48 && s[i]<=57) val.push(to_string(s[i]-48));
    else{// its a operator
       string val2=val.top();
       val.pop();
       string val1=val.top();
       val.pop();
       string ans=solve(val1,val2,s[i]);
       val.push(ans);
       
    }
}
cout<<"Answer is "<<val.top()<<endl;
    return 0;
}