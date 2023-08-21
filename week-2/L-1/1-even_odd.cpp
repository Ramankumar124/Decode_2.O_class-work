// Ques : Take positive integer input and tell if it
// is even or odd
#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;

    if(num%2==0){
        cout<<"your number "<<num<<"is even number"<<endl;

    }
    else{cout<<"Your number is odd";};

    return 0;

}
