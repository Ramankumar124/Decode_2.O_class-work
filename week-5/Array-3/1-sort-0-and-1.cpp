/*Ques : Sort the array of O's and I's .*/
#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int> &v ){

    int n=v.size();
    int noF0=0;
    int noF1=0;
    for(int i=0;i<n;i++){
       if(v[i]==0) noF0++;
       else if(v[i]==1) noF1++;
    }
    //filling elements
      for(int i=0;i<n;i++){
      if(i<noF0) v[i]=0;
      else v[i]=1;
    }
    return ;
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