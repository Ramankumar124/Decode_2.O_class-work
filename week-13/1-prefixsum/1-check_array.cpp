/*Ques: Check if array can be partitioned into 2 continuous
arrays of equal sum.*/
#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,5,6,7,8};
int n=8;
int flag=true;
for(int i=1;i<n;i++){
   arr[i]=arr[i]+arr[i-1];
}
for(int i=1;i<n;i++){
   if(2*arr[i]==arr[n-1]){
    flag=true;
   }
   else {
   flag=false;
   }
}

flag? cout<<" partition is possible " : cout<<"NO partition is possible ";;
    return 0;
}