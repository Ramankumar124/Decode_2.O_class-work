#include<iostream>
using namespace std;

int fact(int n){
     int fact=1;
    for(int i=1;i<=n;i++){

   fact=fact*i;
    }
        return fact;
}

int main(){

    int n,r;

    cout<<"ENter value of n \n";
    cin>>n;
    cout<<"ENter value of r \n";
 cin>>r;
cout<<"your combination is ";
cout<<fact(n)/(fact((n-r))*fact(r))<<endl;
cout<<"your permutation is ";
cout<<fact(n)/fact((n-r));

return 0;

 

}  
