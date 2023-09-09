/*Ques : WAP to print reverse of a given
number.*/
#include<iostream>
using namespace std;

int main(){

  int n;
  int ld;
  int r=0;
  cout<<"Enter a number ";
  cin>>n;

  while(n>0){
   r=r*10;
    ld=n%10;

   r=ld+r;
   n=n/10;
  }
  cout<<"YOur reverse number is  :"<<r;
    return 0;
}