#include<iostream>
#include<stack>
using namespace std;

int main(){

int arr[10]={4,1,2,5,4,3,4,8,2,7};
int n=10;
int ans[10];
ans[n-1]=-1;

stack<int> st;
st.push(arr[n-1]); //push last element

for(int i=n-2;i>=0;i--){
    //pop all the elements smaller then arr[i]
    while(st.size()>0 && arr[i]>=st.top()  ) st.pop(); //step 1 pop
    // mark the answer in ans arr
 if(st.size()==0) ans[i]=-1;
 else   ans[i]=st.top(); // mark ans
// push the arr[i] 
st.push(arr[i]);
}


for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
}

    return 0;
}