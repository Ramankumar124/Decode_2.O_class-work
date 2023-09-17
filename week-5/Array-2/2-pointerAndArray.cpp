#include<iostream>
using namespace std;

int main(){
 int arr[]={1,4,2,5,6};
 int* ptr=arr;
 cout<<ptr<<endl;
 cout<<&arr;
 //hence both the address are same

//  for(int i=0;i<=4;i++){
//     cout<<ptr[i]<<" ";
//  }

//or

for(int i=0;i<=4;i++){
   cout<<*ptr<<" ";
   ptr++;  
}
    return 0;
}