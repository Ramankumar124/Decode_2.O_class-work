#include<iostream>
#include<stack>
using namespace std;

int main(){

    int arr[8]={3,1,2,5,4,6,2,3};
    int n=8;
    int ans[8];
    ans[0]=-1;

stack<int> st;
st.push(arr[0]);
for(int i=1;i<n;i++){
    // pop all the element less then arr[i]
    while(st.size()>0 && arr[i]>=st.top()) st.pop(); 
    // mark the answer in ans arr
    if(st.size()==0) ans[i]=-1;
    else { ans[i]=st.top();}
    // push the arr[i] 
    st.push(arr[i]);
}
for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}
    return 0;
}