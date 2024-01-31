#include<iostream>
#include<string>
using namespace std;

string decimal_to_binary(int n){
    string binary = "";
    while(n>0){
        if(n%2==0) 
        //even
            binary = "0" + binary;
        else if(n%2!=0)  
        //odd
            binary = "1" + binary;  
        // n =n/2;
       n= n>>1; // for divison by 2 be use right shift
    }
    return binary;
}

int main(){
  int n;
 cout<<"Enter value of n \n";
 cin>>n;

cout<<decimal_to_binary(n);
    return 0;
}