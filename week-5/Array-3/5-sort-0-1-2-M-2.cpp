#include<iostream>
#include<vector>
using namespace std;

void  sortColors(vector<int>& nums){
int low=0;
int mid=0;
int hi=nums.size()-1;
while (mid<=hi) {
if(nums[mid]==2){
    swap(nums[mid],nums[hi]);
    hi--;

}
    else if(nums[mid]==0){
        swap(nums[mid],nums[low]);
        low++;
        mid++;
    }
    else if(nums[mid]==1){
        mid++;
    }
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


