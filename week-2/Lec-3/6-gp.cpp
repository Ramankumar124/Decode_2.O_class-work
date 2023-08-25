/*Ques : Display this GP - 1,2,4,8,16,32,.. upto 'n'
terms.*/



#include<iostream>
using namespace std;

int main(){
int n,i;
cout<<"Enter the number of terms you want to display: ";
cin>>n;

int a=1;
// for(i=1;i<n*n-1;i*=2){
//  cout<<i<<" " ;
// }  or
for(i=1;i<n;i++){
    cout<<a<<endl;
    a=a*2;
}
    return 0;
}