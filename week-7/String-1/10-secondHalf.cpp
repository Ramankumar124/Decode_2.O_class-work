
// Ques : Input a string of even length and return the
// second half of that string using inbuilt substr
// function
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

string s;
getline(cin,s);
int mid=s.size()/2;

cout<<s.substr(mid,s.size());



    return 0;
}