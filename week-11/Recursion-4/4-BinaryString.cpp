/*Practice
Generate all binary strings of length n without
consecutive I's
*/

#include<iostream>
using namespace std;

void generate(string s,int n){
if(s.length()==n){
    cout<<s<<endl;
     return;}
 
    generate(s+'0',n);
    if(s=="" || s[s.length()-1]=='0') 
      generate(s+'1',n);
}

int main(){
    int n;
cout<<"Enter first no.";
cin>>n;

string s="";
generate(s,n);
    return 0;
}