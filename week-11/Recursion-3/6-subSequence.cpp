//Ques: Print all increasing sequences of length k from
// first n natural numbers.
//print the substring of a string 

#include<iostream>
#include<string>
using namespace std;

void printSubset(string s,string ans,int idx,int k){
    if(idx==s.length()){
        if(ans.size()==k)
         { cout<<ans<<endl;
    }
        return ;
        }
   char ch=s[idx];
  printSubset(s,ans+ch,idx+1,k);
 printSubset(s,ans,idx+1,k);
}

int main(){

string s="abcd";
// printSubset(s,"");

int k =3;
printSubset(s,"",0,k);
    return 0;
}