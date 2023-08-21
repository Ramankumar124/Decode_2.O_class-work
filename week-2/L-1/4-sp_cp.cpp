/*Ques : If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred.*/

#include<iostream>
using namespace std;

int main(){
  int cp,sp;
  cout<<"Enter Cost Price: "<<endl;
  cin>>cp;
   cout<<"Enter sell Price: "<<endl;
  cin>>sp;
  if(sp>cp){
    cout<<"Your profit is :"<<sp-cp;
  }
  if(sp<cp){
    cout<<"you got loss of :"<<cp-sp<<"rs";
  }
  else{
    cout<<"NO profit no loss";
  }
    return 0;
}