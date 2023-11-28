/*Ques : Print sum from 1 to n ( Parameterised )*/



#include<iostream>
using namespace std;

void sum(int i,int n){
    if(n==0) 
    {
    cout<<i<<endl;
    return ;
    }
sum(i+n,n-1);
return;
}

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

sum(0,n);
    return 0;
}