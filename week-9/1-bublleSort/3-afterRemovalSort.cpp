/*Ques : Sort a String in decreasing order of values
associated after removal of values smaller than X.*/

#include<iostream>
using namespace std;

int main(){

string str = "abacdxefghijklmnxyz";
string s="";
for(int i=0;i<str.size();i++){
    if(str[i]>='x'){
        s.push_back(str[i]);
    }
}
cout<<s<<endl;
for(int i=0;i<s.size();i++){
    
    for(int j=0;j<s.size()-1-i;i++){
        if (s[j]>s[j+1]){
            swap(s[j],s[j+1]);
    }
}}
cout<<s<<endl;
    return 0;
}