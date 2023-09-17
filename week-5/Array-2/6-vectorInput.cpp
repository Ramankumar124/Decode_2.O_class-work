#include<iostream>
#include<vector>
using namespace std;

int main(){
// vector<int> v(5);

// for(int i=0;i<5;i++){
//     cin>>v[i];
// }
// for(int i=0;i<5;i++){
//     cout<<v[i];
// }
//     return 0;
// }
//  this will show error if we  not mention size of array



vector<int> v;// no need to Mention size


for(int i=0;i<5;i++){
  int x;
  cin>>x;
  v.push_back(x);
}
for(int i=0;i<5;i++){
    cout<<v[i];
}
    return 0;
}