#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;
int nst=1;
int nsp=n-1;
for(int i=1 ;i<=n;i++){
    //spaces
    for(int j=1;j<=nsp;j++){
        cout<<" ";
    }
    nsp--;
    for(int k=1;k<=nst;k++){
        cout<<"*";
    }
        nst=nst+2;
        cout<<endl;
}
    return 0;
}