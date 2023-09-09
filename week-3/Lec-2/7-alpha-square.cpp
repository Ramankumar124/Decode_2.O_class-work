
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n \n";
    cin >> n;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           char alpha=(int)j+65;

            cout <<alpha <<" ";
        }
        cout << "\n";
    }

    return 0;
}
