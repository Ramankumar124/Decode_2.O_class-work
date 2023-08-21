/*Ques : Take positive integer input and tell if it
is divisible by 5 and 3 using nested if*/
#include<iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter number"<<endl;
     cin>>num;
     //Nested If Statement
     if(num%5==0){
        if(num%3==0){
            cout<<"Yes this number is divisivle by 5 and 3";   
        }
        else{
            cout<<"this number is only divisible with 5";

        }
     }
     else{
        cout<<"conditons does not matched";
     }
     
    return 0;
    
}
