/*Ques : Print zig-zag
Input
Output
111
211121112
321112111232111211123
432111211123211121112343211121112321112111234*/


//same as pre in post

#include<iostream>
using namespace std;

void pip(int n){
    if(n==0) return;
    cout<<n;
    pip(n-1);
    cout<<n;
    pip(n-1);
    cout<<n;
    
} 

int main(){
    cout<<endl;
     int n;
 cout<<"Enter value of n \n";
 cin>>n;
pip(n);
    return 0;
}