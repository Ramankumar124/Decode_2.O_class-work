//Reverse Array without using extra array
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
cout<<"Elements of  array is ";
for(int i=0;i<=n-1;i++){
   cout<<   v1[i]<<" ";
}
cout<<endl;
//reverse
int i=0;
int j=v1.size()-1;
while(j>=i){

    int temp=v1[i];
    v1[i]=v1[j];
    v1[j]=temp;
    i++;
    j--;
}
cout<<"Reverse elements or  array is ";
for(int i=0;i<=n-1;i++){
   cout<<   v1[i]<<" ";
}
//or reverse(v1.begin(),v1.end());
    return 0;
}