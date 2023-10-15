#include<iostream>
using namespace std;

int main(){

int arr[]={6,5,4,3,2,1};
int n=6;
for(int i=0;i<n;i++){
int j =i;
// while(j>=1){
//     if(arr[j]>=arr[j-1]) break;
//     else(arr[j]<arr[j-1]){
//         swap(arr[j],arr[j-1]);
//     }
//     j--;
// }}
while(j>=1 && arr[j]<arr[j-1]){
    swap(arr[j],arr[j-1]);
    j--;
}
}
for(int elem:arr){
    cout<<elem<<" ";
}
    return 0;
}

//insertion sort is better then bubble sort 
// it does not need any bool checkmark