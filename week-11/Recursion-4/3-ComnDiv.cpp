/*
Greatest Common Divisor
Calculate Greatest Common Divisor of two numbers.*/


//school hcf method
#include<iostream>
using namespace std;

int hcf(int m,int n){
    if(m==0) return n;
   else return hcf(n%m,m);
    
}

int main(){

int n,m;
cout<<"Enter first no.";
cin>>m;
cout<<"Enter second no.";
cin>>n;

cout<<hcf(m,n);
    return 0;
}