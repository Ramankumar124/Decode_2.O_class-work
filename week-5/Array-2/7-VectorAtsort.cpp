#include<iostream>
#include<vector>
#include <algorithm> // Include the algorithm library

using namespace std;

int main(){

vector<int> v;
v.push_back(9);
v.push_back(5);
v.push_back(3);
v.push_back(8);


//at use
// v.at(2)=67;
// cout<<v.at(2);

for(int i=0;i<v.size();i++){
cout<<v.at(i)<<" ";
}
cout<<endl;

//Sort
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
cout<<v.at(i)<<" ";
}
    return 0;
}