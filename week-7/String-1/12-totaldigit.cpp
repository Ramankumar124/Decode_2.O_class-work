/*Ques : Return the total number of digits in a
number without using any loop.
Hint : Try using inbuilt to_string() function.*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
int x=26726;

string s=to_string(x);

int size=s.size();

cout<<"Our string is "<<s<<"of size " <<size<<endl;
    return 0;
}