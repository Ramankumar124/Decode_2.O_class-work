//Ques : Maximum sum Subarray of size k

#include<iostream>
using namespace std;

int main(){

int arr[]={7,1,2,5,8,4,9,3,6};
int n=9;
int k=3;
int maxSum=-1;

for(int i=0;i<=n-k;i++){
    int sum=0;
    for(int j=i;j<i+k;j++){
      sum+=arr[j];
    }
   maxSum= max(maxSum,sum);
}
cout<<"max sum is "<<maxSum;
    return 0;
}