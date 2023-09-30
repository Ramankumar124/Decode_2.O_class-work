#include<iostream>
#include<string>
using namespace std;

int main(){
// string str="jai shree Radhe Radhe";
// cout<<str;

string s;
// cin>>s;
// cout<<s;// this will show error becouse space or enter se 
         // cin khatam ho jata tha

    getline(cin,s);
    cout<<s;     
    return 0;
}