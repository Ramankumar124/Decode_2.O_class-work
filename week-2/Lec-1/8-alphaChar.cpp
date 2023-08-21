/* Ques : Write a program to check whether a
character is an alphabet or not.*/
#include<iostream>
using namespace std;

int main(){

 char ch;
 cout<<"Enter the character: ";
 cin>>ch;
   int newch=(int)ch;
   if(newch>65 && newch<=97 || newch>97 && newch<=122){
    cout<<"Its a charactor ";
   }
   else{
    cout<<"Its not a charactor";
   }
return 0;
}