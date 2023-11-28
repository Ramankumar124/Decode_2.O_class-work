#include<iostream>
using namespace std;

void pip(int n){
    if(n==0) return;
    cout<<"Pre"<<n<<endl;
    pip(n-1);
    cout<<"in"<<n<<endl;
    pip(n-1);
    cout<<"Post"<<n<<endl;
    
} 

int main(){
    cout<<endl;
pip(3);
    return 0;
}