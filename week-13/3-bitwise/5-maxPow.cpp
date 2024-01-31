//Given an integer n, find the maximum power of two that is
//smaller than n.

#include<iostream>
using namespace std;

int main(){

int x=100;
int temp;
while (x!=0)
{
    temp=x;
    x=x& (x-1);
}
cout<<temp<<"\n";

    return 0;
}