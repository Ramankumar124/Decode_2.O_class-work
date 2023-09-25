/*Ques: Write a C++ program to find the largest
element of a given 2D array of integers.*/

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


int max=INT16_MIN;

for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        
        if( arr[i][j]>max ){
            max=arr[i][j];
        }
    }
    cout<<endl;
    }
cout<<max;
    return 0;
}