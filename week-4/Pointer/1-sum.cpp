/*Write a program to calculate sum of two numbers
using pointers.*/
#include<iostream>
using namespace std;

int main(){

int a=5;
int b=20;
int* p1=&a;
int* p2=&b;
cout<<*p1+*p2;

    return 0;
}