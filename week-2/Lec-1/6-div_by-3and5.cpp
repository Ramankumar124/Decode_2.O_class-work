/*Ques : Take positive integer input and tell if it
is divisible by 5 and 3.*/
#include<iostream>
using namespace std;

int main(){
     int num;
     cout<<"Enter number"<<endl;
     cin>>num;
     if(num%5==0 && num%3==0){
        cout<<"the number is divisivle by 5 and 3"<<endl;

     }
     else{
        cout<< "The number is not divisable by both of them";
     }
    return 0;
    
}
