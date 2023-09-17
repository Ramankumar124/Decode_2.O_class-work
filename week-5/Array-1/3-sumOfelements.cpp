/*Ques : Calculate the sum of all the elements in the
given array.*/

#include<iostream>
using namespace std;

int main(){

int size;
cout<<"Enter the size of array :";
cin>>size;
int sum=0,i;
int arr[size];
for( i=0;i<=size-1;i++){
    cin>>arr[i];
}
for( i=0;i<=size-1;i++){
    sum+=arr[i];
    
}
cout<<"Sum of your array is :"<<sum;
    return 0;
}