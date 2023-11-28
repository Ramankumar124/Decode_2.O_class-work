#include<iostream>
#include<string>
using namespace std;

void generate(int n,int ob,int cb,string s){
if(cb==n){
    cout<<s<<endl;
    return;
}
if( ob<n)generate(n,ob+1,cb,s+'(');
if(ob>cb )generate(n,ob,cb+1,s+')');

}

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 generate(n,0,0,"");

    return 0;
}