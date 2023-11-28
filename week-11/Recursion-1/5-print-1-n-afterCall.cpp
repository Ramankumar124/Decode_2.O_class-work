//Ques : Print 1 to n (wihout extra parameter)
#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;//base case
    print(n-1);//call
    cout<<n<<" ";

}

int main(){
 int n;
 cout<<"Enter value of n \n";
 cin>>n;

 print(n);
    return 0;
}