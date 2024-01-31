// we can calculate two of powr( 2^x) of any no usign left shift
// 1<<x  (x=n0)
#include<iostream>
using namespace std;

int main(){

int x;
cout<<"Enter the value of x";
cin>>x;
cout<<"power of 2^"<<x<< " is ";
cout<<(1<<x);
    return 0;
}