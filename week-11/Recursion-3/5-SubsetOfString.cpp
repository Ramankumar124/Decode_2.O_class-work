//print the substring of a string 

#include<iostream>
#include<string>
using namespace std;
//use pen paper to dry run
void printSubset(string s,string ans){
    if(s.length()==0){
          cout<<ans<<endl;
        return ;
    }
   char ch=s[0];
 printSubset(s.substr(1),ans+ch);
  printSubset(s.substr(1),ans);
}

void printSubset(string s,string ans,int idx){
    if(idx==s.length()){
          cout<<ans<<endl;
        return ;
    }
   char ch=s[idx];
  printSubset(s,ans+ch,idx+1);
 printSubset(s,ans,idx+1);
}

int main(){

string s="abc";
// printSubset(s,"");
printSubset(s,"",0);
    return 0;
}