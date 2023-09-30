#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

// string str="Raman kumar this side";

// //lenth
// cout<<str.size();// or lenth
//  //push or popback
//  str.push_back('k'); 
// cout<<str<<endl;

// str.pop_back();
// str.pop_back();

// cout<<str<<endl;

// // + operator
// string s="raman";
// string t="kumar";
// s=s+t;
// cout<<"concatenated strings are "<<s<<endl;//or use <<operator

//reverse

string s="Raman kumar";
 //reverse(s.begin(),s.end());
 reverse(s.begin()+3,s.end()-1);
 cout<<s;
   return 0;
}