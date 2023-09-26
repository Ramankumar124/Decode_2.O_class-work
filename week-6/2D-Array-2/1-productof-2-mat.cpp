/*Ques : Write a program to print the multiplication
of two matrices given by the user.*/


#include<iostream>
using namespace std;

int main(){


int n,m,p,q;
cout<<"Enter No. of Rows of first martix ";
cin>>m;
cout<<"Enter No. of Colum of first matrix ";
cin>>n;
cout<<"Enter No. of Rows of second martix ";
cin>>p;
cout<<"Enter No. of Colum of second matrix ";
cin>>q;
if(n!=p) return 0;

int arr[m][n];
int brr[p][q];
int result[m][q];


    cout<<"Enter elements of first matrix  \n";
for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        
        cin>>arr[i][j];
    }
}

    cout<<"Enter elements of second matrix  \n";
for(int i=0;i<p;i++){
    for(int j =0;j<q;j++){
        
        cin>>brr[i][j];
    }
}

for(int i=0;i<m;i++){
    for ( int j=0 ; j < q; j++ ) {
        result[i][j]=0;
        for(int k=0;k<p;k++){
            result [i][j] += arr[i][k]*brr[k][j];
        }
}

}
for(int i=0;i<m;i++){
    for(int j =0;j<q;j++){
        
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}