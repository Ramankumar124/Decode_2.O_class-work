//fact of mumber 

#include<iostream>
using namespace std;

int main(){
     int n;
 cout<<"Enter value of n \n";
 cin>>n;
 int fact=1;
for(int i=1;i<=n;i++){
    fact=fact*i;
}
cout<<"fact is "<<fact;
    return 0;
}