/*Ques : Write a function to compute the greatest
common divisor of two given numbers*/

#include<iostream>
using namespace std;
int hcf(int x,int y){
    int ans=0;
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0 ){
            ans=i;
            break;
        }
    }
    return ans;
}
int main(){

    int n,m;
    cout<<"Enter first number";
    cin>>n;
    cout<<"Enter first number";
    cin>>m;

    cout<<hcf(m,n);
    return 0;
}
