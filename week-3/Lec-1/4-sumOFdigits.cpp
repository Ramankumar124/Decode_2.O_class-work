/*Ques : WAP to print sum of digits of a given
number.*/


#include<iostream>
using namespace std;

int main(){

int n;
int ld;
// int count =0;
int sum=0;
cout<<"Enter a number\n";
cin>>n;
for(int i=0;n>0;i++){// more preferable to use while loop
ld=n%10;
n=n/10;
// count++;
sum=ld+sum;
}


cout<<sum;
    return 0;
}