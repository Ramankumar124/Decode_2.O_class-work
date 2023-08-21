/*Ques : Write a program to check whether a
given character is a vowel or a consonant.*/

#include<iostream>
using namespace std;

int main(){
   char ch;
   cout<<"Enter your charactor";
   cin>>ch;
   int alpha=(int)ch;
   if(alpha>65 && alpha<122){
    if(ch=='a'){
        cout<<"its a vowel";
    }
    else if(ch=='e'){
     cout<<"its a vowel";
        
    }
     else if(ch=='i'){
     cout<<"its a vowel";
        
    }
     else if(ch=='o'){
     cout<<"its a vowel";
        
    } else if(ch=='u'){
     cout<<"its a vowel";
        
    }
    else{
        cout<<"its a consonent";

    }
   }
   else{
    cout<<"given charactor is not a alphabet";
   }
    return 0;
}