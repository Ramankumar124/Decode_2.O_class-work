/*Ques : Sort the array of O's and I's .*/


#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& v ){
// not a good approach
int st=0;
int end=v.size()-1;
while(st<end){
    if(v[st]==0)  st++;
       if(v[end]==1) end--;
       if(st>end) break;
       if(v[i]==1 && v[end]==0){
        swap(v[i],v[end]);
        st++;
        end--;
       }
}
}

int main(){

    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}