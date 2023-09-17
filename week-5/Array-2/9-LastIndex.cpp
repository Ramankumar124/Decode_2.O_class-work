/*Ques : Find the last occurrence of x in the array.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;
    v.push_back(6);
    v.push_back(45);
    v.push_back(3);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);

    int x = 3;
    int idx = -1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            idx = i;
            break;
        }
    }
    cout << idx;
    return 0;
}