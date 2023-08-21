/*Ques : Take 3 numbers input and tell if they
can be the sides of a triangle.*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter sides of triangle ";
    cin >> a >> b >> c;
    if (a + b > c)
    {
        if (b + c > a)
        {
            if (c + a > b)
            {
                cout << "yes it can be sides of traingle";
            }
        }
    }
    else{
        cout<<"Invalid triangle";
    }
    return 0;
}