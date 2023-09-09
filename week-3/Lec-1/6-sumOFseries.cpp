/*Ques : Print the sum of this series :
1-2 + 3 - 4+ 5 - 6... upto*/
#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;
 int sum=0;
 for(int i=0;i<n;i++){
   if(i%2==0){
    sum=sum-i;
   }

  else{ sum=i+sum;
}
 }
  cout<<sum;
    return 0;
}