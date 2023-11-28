//Ques : Power function (logarithmic)#include<iostream>
//works with only 2 power
#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return x;
    int ans=pow(x,n/2);
    if(n%2==0)
    return ans*ans;
    else return ans*ans*x;
}
int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;
 cout<<pow(3,n);
    return 0;
}