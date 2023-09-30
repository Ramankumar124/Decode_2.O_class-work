/*Ques : Given an integer 'numRows', generate
Pascal's triangle.
[Leetcode 118]*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> v;
int m ;
cout<<"Enter your number ";
cin>>m;

for(int i=1;i<=m;i++){
    vector<int> a(i);
    v.push_back(a);
}
   //genration 

    for (int i = 0; i < v.size(); i++)
    {

        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
                v[i][j] = 1;
            else
            {

                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
            }
        }
    }

    for (int i = 0; i <= v.size() - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}