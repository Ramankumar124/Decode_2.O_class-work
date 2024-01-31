// to convert binary number to decimal
#include<iostream>
#include<string>
using namespace std;

int binary_to_decimal(string &binary){
    int n = binary.length();

    int decimal=0;
    for(int i=n-1;i>=0;i--){
        char ch=binary[i];
        int num=ch-'0';// used to convert char into no
        decimal=decimal+num*(1<<(n-i-1));
    }
    return decimal;
}


int main(){

string binary="001101";
cout<<binary_to_decimal(binary);
    return 0;
}