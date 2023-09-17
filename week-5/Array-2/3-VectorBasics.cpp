#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;// you nedd not mention size
    //inserting /input do note use []
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    // v[3]=1;  ye nhi chalega
    
//it you want update/acces you can use []
// cout<<v[0]<<" ";
// cout<<v[1]<<" ";
// cout<<v[2]<<" ";
// cout<<v[3]<<" ";

cout<<v.size()<<" ";
cout<<v.capacity();

    return 0;
}