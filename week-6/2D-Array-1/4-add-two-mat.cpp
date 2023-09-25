/*Ques : Write a program to add two matrices.*/



#include<iostream>
using namespace std;

int main(){

int n,m,p,q;
cout<<"Enter No. of Rows of first martix ";
cin>>n;
cout<<"Enter No. of Colum of first matrix ";
cin>>m;
cout<<"Enter No. of Rows of second martix ";
cin>>p;
cout<<"Enter No. of Colum of second matrix ";
cin>>q;


int arr[n][m];
int brr[p][q];
int result[n][m];

if(n!=p || m!=q){
    cout<<"\nMatrices are not same size";
    return 0;
}


    cout<<"Enter elements of first matrix  \n";
for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        
        cin>>arr[i][j];
    }
}

    cout<<"Enter elements of second matrix  \n";
for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        
        cin>>brr[i][j];
    }
}



for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
     
     result[i][j]=arr[i][j]+brr[i][j];
      
    }
  
    }
for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}