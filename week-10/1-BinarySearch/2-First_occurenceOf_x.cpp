/*Ques :Given a sorted array of n elements and a
target 'x'. Find the first occurrence of 'x' in the
array. If 'x' does not exist return -1.*/

#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,2,2,2,3,3,3,3,4,4,4,5,5,5,5};
int x=3;
int lo=0;
int hi=16-1;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
     if(arr[mid]==x){
        if(arr[mid-1]!=x){
            cout<<mid;
            break;
        }
        
else{
     hi=mid-1;
}}
else if(arr[mid]<x) lo=mid+1;
else hi=mid-1;  
     
    }


    return 0;
}