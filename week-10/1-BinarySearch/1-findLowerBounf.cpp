/**Lower bound
Ques: Given a sorted integer array and an integer
'x', find the lower bound of x.*/


#include<iostream>
using namespace std;

int main(){

int arr[]={1,2,3,4,5,6,8,9,10,11};
int target=7;
int lo=0;
int hi=10-1;
bool flag=false;
while(lo<=hi){
    int mid=(lo+hi)/2;
   if(arr[mid]==target) {
    flag=true;
    cout<<arr[mid-1];//for upper bound we will use mid+1;
    break;
    }
  else if(arr[mid]<target) lo=mid+1;
   else if(arr[mid]>target) hi=mid-1;
}
if(flag==false) cout<<arr[hi];
// if we want to print upper bound then we will use arr[lo]
    return 0;
}