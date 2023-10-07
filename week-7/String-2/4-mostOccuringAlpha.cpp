/*Ques : Given a string consisting of lowercase
English alphabets. Print the character that is
occurring most number of times.*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    string s;
    cin >> s;

    // sort(s.begin(),s.end());
    cout << s << endl;

    int maxcount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int count = 1;
        char ch = s[i];
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
         if(count>maxcount) maxcount=count;
   
    }

   for(int i=0;i<s.length();i++){
    char ch=s[i];
    int count =1;
    for(int j=i+1;j<s.length();j++){
        if(s[j]==s[i]) count++;
    }
    if(count==maxcount){
        cout<<ch<<" "<<maxcount<<endl;
    }
   }
    return 0;

}