
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
            if(i==(n/2) || j==(n/2)  )
            cout << " *";
            else{
                cout<<"  ";
            }
        }
        cout << "\n";
    }

    return 0;
}
