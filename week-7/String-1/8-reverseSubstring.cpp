/*Ques : Input a string of length greater than 5 and
reverse the substring from position 2 to 5 using
inbuilt functions.*/


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){


string s;
getline(cin,s);
cout<<s<<endl;
reverse(s.begin()+2,s.begin()+6);
cout<<s;

}