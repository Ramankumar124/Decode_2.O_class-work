/*Ques : Take positive integer input and tell if it
is divisible bv 5 or 3 but not divisible bv 15.*/

#include<iostream>
using namespace std;

int main(){
 int num;
 cout<<"Enter your number";
 cin>>num;
 if((num%5==0 || num%3==0)&&num/15!=0){
    cout<<"your enter correct number";
 }   
 else{
    cout<< "Your number is incorrect ";
    
 }
return 0;
}