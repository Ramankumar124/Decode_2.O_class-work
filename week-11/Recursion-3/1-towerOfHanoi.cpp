#include<iostream>
using namespace std;

void hanoi(int n,char s,char h,char d){//start helper destdination
if(n==0) return;

hanoi(n-1,s,d,h);// d ka helper and s to h
cout<<s<<" to "<<d<<endl;
hanoi(n-1,h,s,d);// a helper 


return;
}


int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 hanoi(n,'A','B','C');
    return 0;
}