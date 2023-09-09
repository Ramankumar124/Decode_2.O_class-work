// odd Even using continue
#include<iostream>
using namespace std;

int main(){
int num;
cout<<"Enter your number";
cin>>num;
for(int i=0;i<num;i++){
 
 if(i%2==0) continue;
 else  cout<<i<<endl;
         
    }

    return 0;
}