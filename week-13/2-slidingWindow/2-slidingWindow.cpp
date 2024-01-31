//Ques : Maximum sum Subarray of size k

#include<iostream>
using namespace std;

int main(){

int arr[]={7,1,2,5,8,4,9,3,6};
int n=9;
int k=3;
int maxIdx=0;
int maxSum=0;
int prevSum=0;
//calculate sum of first k terms
for(int i=0;i<k;i++){
  prevSum+=arr[i];
}
maxSum=prevSum;
int i=1;
int j=k;
while(j<n){
    int curSum=prevSum+arr[j] - arr[i-1];

    if(maxSum<curSum) {
    maxSum=curSum;
    maxIdx=i;
    }
    prevSum=curSum;
    i++;
    j++;
}
cout<<"max sum is "<<maxSum;
    return 0;
}