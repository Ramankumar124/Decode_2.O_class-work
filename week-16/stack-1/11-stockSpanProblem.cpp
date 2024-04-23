// we have given a spam
//input : 100,80,60,70,60,75,85
//output : 1,1,1,2,1,4,6


#include<iostream>
#include<stack>

using namespace std;

int main(){


int arr[8]={100,80,60,81,70,60,75,85};
int n=8;
int pgi[8];
int ans[8];
pgi[0]=1;
stack<int> st;

st.push(0);
for(int i=1;i<n;i++){

while(st.size()>0 && arr[i]>=arr[st.top()]) st.pop();
if(st.size()==0)  {pgi[i]=-1;}
 else{
    pgi[i]=st.top();
    pgi[i]=i-pgi[i];
 }
 st.push(i);
}
for(int i=0;i<n;i++){
    cout<<pgi[i]<<" ";
}

    return 0;
}