// Basic program to demonstrate the concept of recursion
#include<iostream>
using namespace std;

void greet(int n){
    if(n==0) return;
    cout<<"Hello World!"<<endl;
     greet(n-1);
}

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 greet(n);
    return 0;
}