/*Ques : WAP to count digits of a given number.*/


#include<iostream>
using namespace std;

int main(){
int n;
int count =0;
int a=n;
cout<<"Enter a number\n";
cin>>n;
for(int i=0;n>0;i++){// more preferable to use while loop
n=n/10;
count++;

}
if(a==0) count=1;
cout<<"number of digits are "<<count;
return 0;


}