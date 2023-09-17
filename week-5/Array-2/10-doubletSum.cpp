/*Ques : Find the doublet in the Array whose sum is 
equal to the given value x. ( leetcode-1)
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v;

 int x;
 cout<<"Enter Target \n";
 cin>>x;



int n;
cout<<"Enter array size";

cin>>n;
cout<<"Enter array elements ";
for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
}
cout<<endl;

for(int i=0;i<=v.size()-2;i++){

for(int j=i+1;j<=v.size()-1;j++){
    
    if(v[i]+v[j]==x){
        cout<<"Your Value is "<<v[i]<<" and "<<v[j]<<"indeces is("<<i<<","<<j<<")"<<endl;
    }
}

}

    return 0;
}

//input 

// target value :7
// array size :8
// elements of array :1 3 2 3  4 3 1 6
