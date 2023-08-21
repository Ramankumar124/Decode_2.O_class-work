// Ques : Take 3 positive integers input and print
// the greatest of them.
#include<iostream>
using namespace std;

int main(){

int a,b,c;
cout<<"Enter values of First number"<<endl;
cin>>a;
cout<<"Enter values of Second  number"<<endl;
cin>>b;
cout<<"Enter values of Third number"<<endl;
cin>>c;

if(a>b && a>c){
    cout<<"First num is greator";
}
if(b>c && b>a){
    cout<<"second num is greator";
}
else{
    cout<<"third num is greator ";
}

return 0;
}