/*Ques : Make a function which calculates 'a'
raised to the power 'b' using recursion.*/

#include<iostream>
using namespace std;

int raisedPower(int a,int b){
    if(b==1) return a;
   return a*raisedPower(a,b-1);
}


int main(){
 int n,m;
 cout<<"Enter number(a)\n";
 cin>>n;
 cout<<"Enter Power(b)\n";
 cin>>m;

cout<<raisedPower(n,m);
    return 0;
}