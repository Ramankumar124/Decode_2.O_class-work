/*Ques : Display this AP - 1,3,5,7,9.. upto 'n'
terms.*/


#include<iostream>
using namespace std;

int main(){

int n,i;
cout<<"Enter the number of terms you want to display: ";
cin>>n;

// for(i=1;i<=2*n-1;i+=2){
//      cout<<i<<" ";
    
// }

// Better Aproch
int a=1;
for(i=1;i<n;i++){
    cout<<a<<endl;
    a=a+2;
}


    return 0;
}