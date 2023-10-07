/*Ques : Given a sentence 'str', return the word
that is occurring most number of times in that
sentence.*/

#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>

using namespace std;

int main(){

string s="raman is a good boy it is a nice boys ";

stringstream ss(s);
string temp;

vector<string> v;
//created a vector of string 
while(ss>>temp){
v.push_back(temp);
}

//print elements of vector
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
//sort string 
sort(v.begin(),v.end());

    int maxCount=1;
int count=1;
for(int i=1;i<v.size();i++){

        if(v[i]==v[i-1]) count++;
        else{ count=1;}
        if(count>maxCount) maxCount=count;
         maxCount=max(maxCount,count);
}
count=1;
for(int i=1;i<v.size();i++){

        if(v[i]==v[i-1]) count++;
        else{ count=1;}
        if(count==maxCount) 
      cout<<v[i]<<" "<<maxCount<<endl;
}



    return 0;
}