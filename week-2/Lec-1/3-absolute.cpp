/* Ques : Given an integer. Print the absolute
value of that Inteqer,*/


#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter number";
   cin>>num;
   if(num>=0){
    cout<<"\nAbsolute value is :"<<num;
   }
   else{
    cout<<"\nAbsolute Value is:"<<num*-1;
    
   }
    return 0;
}