/*Ques : Given two strings s and t, return true if t is an
anagram of s, and false otherwise.
Input : s = physicswallah, t = wallahphysics
Output: YES*/


#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s;
    cout<<"Enter first srting \n";
    cin>>s;
    cout<<"Enter Second srting \n";

    string t;
    cin>>t;
    
    sort(t.begin(),t.end());
    sort(s.begin(),s.end());
    if(s==t){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}

