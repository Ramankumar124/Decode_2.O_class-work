/*Ques : Print the nth fibonacci number.*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENter value of N";
    cin>>n;
 int a;
 cout<<"Enter value of A\n";
 cin>>a;
  int b;
 cout<<"Enter value of B\n";
 cin>>b;
int sum=0;
 for(int i=0;i<n;i++){
 sum=a+b;
 a=b;
 b=sum;
 cout<<sum<<" ";
 }
 
    return 0;
}