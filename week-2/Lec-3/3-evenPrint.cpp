// print all even number from 1 to 100

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}