//find the second largest element

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
int smax=INT16_MIN;



for(int i=0;i<n;i++){
    for(int j =0;j<m;j++){
        
        if( arr[i][j]>max ){
            smax=max;
            max=arr[i][j];
        }
        //arr[i][j] is not greater than max but is still greater than the current smax.
        
        else if( arr[i][j]>smax && arr[i][j] !=max){
            smax=arr[i][j];
        }
    }
    cout<<endl;
    }
cout<<smax;
    return 0;
}