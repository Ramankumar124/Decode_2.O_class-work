#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height){
int n=height.size();

int max=height[0];

//previous greatest element
int prev[n];
prev[0]=-1;

for(int i=1;i<n-1;i++){
    prev[i]=max;
   if(max<height[i]) max=height[i];
}
// next greatest element
int next[n];
 next[0]=-1;
 max=height[n-1];

for(int i=n-2;i>=0;i--){
    next[i]=max;
    if(max<height[i]) max=height[i];
}

int mini[n];
for(int i=0;i<n;i++){
 mini[i]=min(prev[i],next[i]);
}
int water=0;
for(int i=0;i<n-1;i++){
    if(height[i]<mini[i]) {
        water+=mini[i]-height[i];
    }
}
cout<<"Your total water is "<<water;
return water;
}

int main(){

vector<int> high;

high.push_back(0);
high.push_back(1);
high.push_back(0);
high.push_back(2);
high.push_back(1);
high.push_back(0);
high.push_back(1);
high.push_back(3);
high.push_back(2);
high.push_back(1);
high.push_back(2);
high.push_back(1);

trap(high);

    return 0;
}