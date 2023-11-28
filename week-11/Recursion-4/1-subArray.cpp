//find subset of array

#include<iostream>
#include<vector>
using namespace std;

void subArray(vector<int>& v,vector<int> ans,int idx,int n){

if(idx==n){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    cout<<endl;
        return;
} 
    subArray(v,ans,idx+1,n);
    if(ans.size()==0)
    {
        ans.push_back(v[idx]);
    subArray(v,ans,idx+1,n);
    }//we dont need 1,3,4   and 2,4 type so we will make changes in second call
else if(v[idx-1]==ans[ans.size()-1]){//vector last element and ans previous element
  ans.push_back(v[idx]);
    subArray(v,ans,idx+1,n);
}
}


int main(){

vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

int n=v.size();
vector<int> ans;
subArray(v,ans,0,n);
    return 0;
}