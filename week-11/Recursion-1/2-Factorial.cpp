// To calculate the Factorial  of given number
#include<iostream>
using namespace std;
 int fact(int n){
    if(n==1) return 1;//base case
    int ans=n*fact(n-1);
    return ans;
 }

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 cout<<"Your factorial is "<<fact(n);
    return 0;
}
