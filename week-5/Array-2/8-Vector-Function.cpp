#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){ //but we use pass by refrence by adding & before a

    a[0]=45;
     
    return;
}
int main(){

vector<int> v;

v.push_back(3);
v.push_back(7);
v.push_back(9);
v.push_back(4);

for(int i=0;i<v.size();i++){
    cout<<" "<<v[i];
    }
cout<<endl;
    // trying to change value
    change(v);

    
    for(int i=0;i<v.size();i++){
    cout<<" "<<v[i];
    }


    return 0;
}

//vector works in pass by value