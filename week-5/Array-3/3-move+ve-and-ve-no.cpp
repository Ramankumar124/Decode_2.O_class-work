/*Ques : Move all negative numbers to beginning and
positive to end with constant extra space*/
#include<iostream>
#include<vector>
using namespace std;

void sort_pos_neg(vector<int>& v ){

int st=0;
int end=v.size()-1;




   while(st<end)
       if(v[st]>0)  st++;
      else if(v[end]<0) end--;
       
     else  if(v[st]<0 && v[end]>0){
        swap(v[st],v[end]);
      st++;
    end--;
       }
  
    return;
   
}

int main(){

    vector<int> v;
    v.push_back(-1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
sort_pos_neg(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}

