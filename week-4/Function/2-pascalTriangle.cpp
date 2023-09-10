#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int comb(int x, int y)
{
    return fact(x)/(fact(y)*fact((x-y)));
}

int main()
{
    int n;
    cout << "Enter value of n \n";
    cin >> n;
    int i, j;
    for (i = 0; i <= n; i++)
    {

 
        for (j = 0; j <=i; j++)
        {
           cout << comb(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}