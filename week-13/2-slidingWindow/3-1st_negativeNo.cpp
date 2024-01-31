// Ques : First negative number in every window of size k



#include<iostream>
#include<vector>
using namespace std;

int main(){

int arr[]={2,-3,4,4,-7,-1,4,-2,6};
int n=9;
int k=3;

vector<int> ans;
//bruteForce

// for(int i=0;i<=n-k;i++){
//     for(int j=i;j<i+k-1;j++){
//         if(arr[j]<1){
//       v.push_back(arr[j]);
//       break;
//         }
//     }
// }

// sliding window
//galat hai code 
int p=-1;  // negative no idx
for(int i=0;i<k;i++){
    if(arr[i]<1)p=i;   // first neg number idx
    break;
}
ans.push_back(arr[p]);

int i=1;
int j=k;
while(j<n){
    if(p>=i) ans.push_back(arr[p]);
    else{
        for(p=i;p<j;p++){
            if(arr[p]<1) break;
        }
        ans.push_back(arr[p]);
    }
    i++;j++;
}
for( int e:ans){
    cout<<e<<" ";
}
    return 0;
}