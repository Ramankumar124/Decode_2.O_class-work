/*Skip a character
Remove all occurrences of 'a' from a string.*/

#include<iostream>
#include<string>
using namespace std;

void ral(string s,string ans){
    if(s.length()==0){
          cout<<ans;
        return ;
    }
   char ch=s[0];
   if(ch=='a') ral(s.substr(1),ans);
   else ral(s.substr(1),ans+ch);
}

void ral(string s,string ans,int idx){
    if(idx==s.length()){
          cout<<ans;
        return ;
    }
   char ch=s[idx];
   if(ch=='a') ral(s,ans,idx+1);
   else ral(s,ans+ch,idx+1);
}

int main(){

string s="Raman kumar";
// ral(s,"");//remove all Ocurrence
ral(s,"",0);//remove all Ocurrence
    return 0;
}