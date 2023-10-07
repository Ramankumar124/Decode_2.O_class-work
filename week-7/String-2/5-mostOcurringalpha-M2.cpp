/*Ques : Given string consisting of lowercase
English alphabets. Print the character that is
occurring most number of times.*/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    string s="Raman";

    vector<int> arr(26,0);
//value storing in special array 
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
 int max=0;
 for(int i=0;i<26;i++){
    if(arr[i]>max) max=arr[i];
    
 }
  for(int i=0;i<26;i++){
   if(arr[i]==max) { int ascii=i+97;
     char ch=(char)ascii;
     cout<<ch<<" "<<max<<endl;
     }
    
 }
}