//Ques : Write a function to calculate the nth
// fibonacci number using recursion.

#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1 || n==2)   return 1;
    return fibo(n-1) + fibo(n-2);
    
}


int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;
 //1 1 2 3 5 8 13 21........
 cout<<fibo(n);
    return 0;
}