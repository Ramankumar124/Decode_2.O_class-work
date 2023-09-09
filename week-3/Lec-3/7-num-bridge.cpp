#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 int i,j,k;
 int nsp=1;
 int nst=n;
for(int i=1;i<=2*n-1;i++){
    cout<<i;
}
cout<<endl;
 for(i=1;i<=n;i++){
    int a=1;
    for(j=1;j<=nst-i;j++){
        cout<<a;
    a++;
    }
    for(k=1;k<=nsp;k++){
        cout<<" ";
        a++;
    }
    nsp+=2;
   
    for(j=1;j<=nst-i;j++){
        cout<<a;
        a++;
    }
    cout<<endl;
 }
    return 0;
}