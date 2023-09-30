#include<iostream>
#include<vector>
using namespace std;
int main(){

 vector< vector<int> > v(3,vector<int> (4,2));// 3 row 4 column wugt all element have value 2
// cout<<v.size();
cout<<v[0].size();

return 0;

}