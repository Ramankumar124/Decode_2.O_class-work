//updation of single charactor of string
#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
    getline(cin,s);

    s[5]='%';
    cout<<s;     
    return 0;
}