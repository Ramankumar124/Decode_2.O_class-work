//check the given string is palindrone or not 
#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s,int i,int j){
    if(s[i]!=s[j]) return false;
    else return ispalindrome(s,i+1,j-1);
}


bool palindrone(string s){//method 2
if(i>j) return true;
    int n = s.length();
if(n==0) return false;
    if(s[0]==s[n-1]){
   return palindrone(s.substr(1,n-2));       
    }
    else return true;
}

int main(){
 
string s="nitin";

cout<<palindrone(s)<<endl;
cout<<ispalindrome(s,0,s.size()-1);
    return 0;
}