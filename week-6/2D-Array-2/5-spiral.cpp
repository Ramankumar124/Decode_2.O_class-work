/*  print
 input :1 2 3  4
        5 6 7  8
        9 10 11 12
  
  output : 1 2 3 4 8 12 11 10 9 5 6 7
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

    cout<<"Enter elements of  matrix  \n";
for(int i=0;i<m;i++){
    for(int j =0;j<n;j++){
        
        cin>>arr[i][j];
    }
}

int minr=0;
int maxr=m-1;
int minc=0;
int maxc=n-1;


while(minr<=maxr && minc<=maxc){
//right :row constant
for(int j=minc;j<=maxc;j++){
    cout<<arr[minr][j]<<" ";
}
if(minr>maxr || minc>maxc) break;
    minr++;
// down :col constant 
for(int i=minr;i<=maxr;i++){
    cout<<arr[i][maxc]<<" ";
}
if(minr>maxr || minc>maxc) break;
    maxc--;
 // left : row constant  
for(int j=maxc;j>=minc;j--){
    cout<<arr[maxr][j]<<" ";
}
if(minr>maxr || minc>maxc) break;
   maxr--;
 // up : col constant   
for(int i=maxr;i>=minr;i--){
    cout<<arr[i][minc]<<" ";
} 
  minc++;
  }
    return 0;
}