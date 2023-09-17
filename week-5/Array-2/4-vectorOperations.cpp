#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;// you nedd not mention size
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);
    v.push_back(8);

    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" "; 
    }
    cout<<endl;
// v.pop_back();
// v.pop_back();
// v.pop_back();// pop krne se capacity changae nhi hoti sirf size hoa hai

 for(int i=0;i<v.size();i++){
       cout<<v[i]<<" "; 
    }
  cout<< "\nYOur size is "<<v.size();
    cout<<"\ncapacity is "<< v.capacity();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
      
  cout<< "\nYOur size is "<<v.size();
    cout<<"\ncapacity is "<< v.capacity();
    return 0;
}