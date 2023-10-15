/*Ques : Sort a String in decreasing order of values
associated after removal of values smaller than X.*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {

string s= "acydxeyfxghajkdzdkajdd";

string str="";
for(int i=0;i<s.size();i++){
    if(s[i]<'x'){
        str.push_back(s[i]);

    }
}
cout<<str<<endl;
for(int i=1;i<str.size()-1;i++){
    int j=i;
    while(j>= && str[j]>str[j-1]){
        swap(str[j],str[j-1]);
        j--;
    }
}
for(char ele:str){
    cout<<ele;
}
return 0;
}