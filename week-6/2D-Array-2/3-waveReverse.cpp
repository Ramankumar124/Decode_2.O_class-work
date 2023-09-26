/*Ques : Write a program to print the matrix in wave
form.

1 2 3
4 5 6
7 8 9
output : 7 8 9 6 5 4 1 2 3
*/

#include<iostream>
using namespace std;

int main(){


int n,m;
cout<<"Enter No. of Rows of first martix ";
cin>>m;
cout<<"Enter No. of Colum of first matrix ";
cin>>n;

;

int arr[m][n];



    cout<<"Enter elements of first matrix  \n";
for(int i=m-1;i>=0;i--){
    for(int j =0;j<n;j++){
        
        cin>>arr[i][j];
    }
}
//printing wave Matrix
int j=0;
for(int i=0;i<m;i++){

    if(i%2!=0){
       for(int j=n-1;j>=0;j--){
        cout<<arr[i][j]<<" ";
       }
    }
    else{
            for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
       }
    }
    
}
    return 0;
}
