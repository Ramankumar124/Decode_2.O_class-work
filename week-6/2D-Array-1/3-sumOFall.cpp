/*Ques : Write a program to print sum of all the
elements of a 2D matrix.*/


#include<iostream>
using namespace std;

int main(){

int n,m;
cout<<"Enter No. of Rows  ";
cin>>n;
cout<<"Enter No. of Colum  ";
cin>>m;

int arr[n][m];


    cout<<"Enter roll no and marks  \n";
for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        
        cin>>arr[i][j];
    }
}

int sum=0;


for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        
       sum+=arr[i][j];
        }
    
    cout<<endl;
    }
cout<<sum;
    return 0;
}
