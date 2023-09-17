/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that
Objects Of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0 , 1, and 2 to represent the color red, white, and blue,
respectively.

You must solve this problem without using the library's sort function.
Example 1:
Input: nums=[2,0,2,1,1,0]
Output :    [0,0,1,1,2,2]*/

#include<iostream>
#include<vector>
using namespace std;

void  sortColors(vector<int>& nums){
int no0=0;
int no1=0;
int no2=0;

 for(int i=0;i<nums.size();i++){
       if(nums[i]==0) no0++;
       if(nums[i]==1) no1++;
       if(nums[i]==2) no2++;
    }
    
 for(int i=0;i<nums.size();i++){
       if(i<no0) nums[i]=0;
       else if(i<(no0+no1)) nums[i]=1;
       else nums[i]=2;
       }

       
    return;
}
int main(){

vector<int> v;
v.push_back(2);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);


 for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    sortColors(v);
    cout<<endl;
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

