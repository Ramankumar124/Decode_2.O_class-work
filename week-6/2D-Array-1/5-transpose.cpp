/*Ques : Write a program to print the transpose of
the matrix entered by the user and store it in a new
matrix.*/

#include<iostream>
using namespace std;

int main(){

int n,m;
cout<<"Enter No. of Rows  ";
cin>>n;
cout<<"Enter No. of Colum  ";
cin>>m;

int arr[n][m];

cout<<"Enter Elements\n";
for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        
        cin>>arr[i][j];
    }
}

int transpose[m][n];


for(int j =0;j<m;j++){
for(int i=0;i<n;i++){
        
       transpose[j][i]=arr[i][j];
        }
    

    }

for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        
        cout<<transpose[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}
