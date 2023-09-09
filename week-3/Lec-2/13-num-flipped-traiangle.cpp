#include<iostream>
using namespace std;

int main(){

 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 int i,j,k;

 for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(k=1;k<=i;k++){
        cout<<k<<"";
    }
    cout<<"\n";
 }
    return 0;
}