// remove consicutive Dublicate in a string 
// eg  "aaabbcddabgffg"

#include<iostream>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

int main(){


string s ="aaabbcddabgffg";

stack<char> st;
st.push(s[0]);
for (int i = 1; i <s.size(); i++) 
{
 if(s[i]!=st.top()) st.push(s[i]);   
}

string ans;
while(st.size()>0){
    ans.push_back(st.top());
    st.pop();
}
reverse(ans.begin(),ans.end());
cout<<ans;
    return 0;
}