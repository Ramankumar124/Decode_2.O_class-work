/*Ques : Find the next permutations of Array .
Note :- If not possible then print the sorted order in
ascending order.*/
#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& nums,int i,int j){
    while(i<j){
        swap(nums[i],nums[j]);
        i++;
        j--;
    }
    return;
}

void nextPermutation(vector<int>& nums){
//finding pivot index

int n=nums.size();

int idx=-1;

for(int i=n-2;i>=0;i--){
    if(nums[i]<nums[i+1]){
        idx=i;
        break;
    }
}
if(idx==-1){// if array is already greatest
    reverse(nums,0,n-1);
}

// sortig/reverse after pivat;
reverse(nums,idx+1,n-1);
//finding the just greator elements than idx
int k=-1;
for(int i=idx+1;i<n;i++){
    if(nums[i]>nums[idx])
    k=i;
}
//swaping ix and k
 swap(nums[idx],nums[k]);
return;
}


int main(){

vector<int> arr;
arr.push_back(1); 
arr.push_back(2); 
arr.push_back(3); 

 nextPermutation(arr);


for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

    return 0;
}