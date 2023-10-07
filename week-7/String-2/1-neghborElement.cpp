/*Warmup Problem : Input a string and return the
number of times the neiahbouring characters are
different from each ot er*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str = "abbcdeffghh";
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (i == 0)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }
        else if (str[i] != str[i - 1] && str[i] != str[i + 1])
        {
            count++;
        }
        else if (i == str.size() - 1)
        {
            if (str[i] != str[i - 1])
                count++;
        }
    }

    cout << count;
    return 0;
}