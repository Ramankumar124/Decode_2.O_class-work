/*Ques : WAP to check if a number is prime or
not.*/

#include<iostream>
using namespace std;

int main(){

int num;
bool flag=true;
cout<<"Enter your number";
cin>>num;
for(int i=2;i<num;i++){
    if(num%i==0){
    flag=false;
       break;//remove this beak and then see result

       
    }
}
if(num==1) cout<<" 1 is neither prime nor composite";
if(flag==true){
    cout<<"ITs a prime number";
}
else{
    cout<< "It's not a prime number.";
}
    return 0;
}