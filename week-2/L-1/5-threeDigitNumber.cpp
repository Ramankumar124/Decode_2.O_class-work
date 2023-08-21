/*Ques : Take positive integer input and tell if it
is a three digit number or not.*/

#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter your number\n";
   cin>>num;
   if(num>=100 && num<1000){
    cout<<"Your given number "<<num<< " is three digit number";

   }
   else{cout<<"It is not three digit number";
   }
    return 0;
}