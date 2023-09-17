/*Ques : Write a program to copy the contents of one
array into another in the reverse order.*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> v1;
 int n;
 cout<<"Enter Size of array  \n";
 cin>>n;
for(int i=0;i<=n-1;i++){
    int q;
    cin>>q;
    v1.push_back(q);
}
cout<<"Elements of first array is ";
for(int i=0;i<=n-1;i++){
   cout<<   v1[i]<<" ";
}
vector<int> v2(v1.size());
//logic
for(int i=0;i<n;i++){
  v2[i]=v1[n-i-1];
}
cout<<"Elements of Second  array is ";
for(int j=0;j<n;j++){
   cout<< v2[j]<<" ";
}
    return 0;
}