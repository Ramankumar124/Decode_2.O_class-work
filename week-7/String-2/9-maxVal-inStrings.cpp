/*Ques : Given n stringconsisting of digits from
O to 9. Return the index of string which has
maximum value. (Take O based indexing)
Input : 0123, 0023, 456, 00182, 940, 2901
output =5 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){


 int n;
 cout<<"Enter value of n \n";
 cin>>n;
    vector<string> v;
    cout<<"Enter numbers as a string \n";
    for(int i=0;i<n;i++){

        string s;
        cin>>s;
        v.push_back(s);
    }

    //print string vector
       for(int i=0;i<n;i++){

         cout<<v[i]<<endl;
    }
  int maxVal=0;
    for(int i=0;i<n;i++){

      int x= stoi(v[i]);
      if(x>maxVal) maxVal=x;
    }
    cout<<"string with maximum value is "<<maxVal<<endl;
    
return 0;
}