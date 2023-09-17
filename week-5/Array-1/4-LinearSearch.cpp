/*Linear search
Ques : Find the element x in the array . Take array and
x as input.*/

#include <iostream>
using namespace std;

int main()
{

    int n, i;
    cout << "Enter value of X \n";
    cin >> n;
    int size;
    cout << "Enter the size of array :";
    cin >> size;

    bool flag = true;
    // array declaration

    cout << "Enter Elements of Array\n";
    int arr[size];
    for (i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }
    cout << " YOur Elemens are";
    for (i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " " << endl;
    }

    for (i = 0; i <= size - 1; i++)
    {
        if (arr[i] == n)
        {
            flag=false;
            break;
        }
    }
    if(flag==true) cout<<"Given element is not prsent is array";       
    else  cout << "Present";
    return 0;
}