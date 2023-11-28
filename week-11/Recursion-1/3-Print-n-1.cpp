//print n to 1
#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;//base case
    cout<<n<<" ";
    print(n-1);//call

}

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 print(n);
    return 0;
}