//Ques: Remove Consecutive Duplicates in a string

#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
string removeDublicate(string s){
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
   s = "";
  while(st.size()!=0){
    char c= st.top();
    s+=c;
    st.pop();
}
reverse(s.begin(),s.end());
return s;
}
int main(){
string s= "aaabbccddaabffg";
cout<<"Original string "<<s<<endl;
cout<< removeDublicate(s);

    return 0;
}