/*Ques : Input a string of size n and Update all
the eve. positions in the string to character
'a'. Consider sider O-based indexing.*/
#include<iostream>

using namespace std;

int main(){
 int n,i;
 cout<<"Enter value of n \n";
 cin>>n;
char str[n];
for(i=0;i<n;i++){
    cin>>str[i] ;
}
for(i=0;i<n;i++){
 if(i%2==0){
    str[i]=='a';
 }
}
for(i=0;i<n;i++){
    cout<<str[i]<<" " ;
}
    return 0;
}