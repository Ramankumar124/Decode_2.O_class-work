/*Maximum Value of an array
Find out maximum element of an array using recursion*/


#include<iostream>
using namespace std;
void maxE(int arr[],int n,int idx,int max){
    if(idx==n) {
        cout<<max;
        return;}
    if(arr[idx]>max) max=arr[idx];
    maxE(arr,n,idx+1,max);

}
int maxInArray(int arr[],int n,int idx){
if(idx==n) return INT16_MIN;
return max(arr[idx],maxInArray( arr, n, idx+1));
}
int main(){

int arr[]={2,1,3,4,3,2,4};
int n=sizeof(arr)/sizeof(arr[0]);

//maxE(arr,n,0,INT16_MIN);//method 1 without returning 

cout<<maxInArray(arr,n,0);// mwthod 2 with returning
    return 0;
}