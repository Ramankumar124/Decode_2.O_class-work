#include <iostream>
using namespace std;

int main()
{

    int arr[] = {4, 1, 6, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int e : arr)
    {
        cout << e << " ";
    }
    cout << endl;


    // cyclic sort
    int i = 0;
    while (i < n)
    {
        int correctIdx = arr[i] - 1;
        if (i == correctIdx)
            i++;
        else
            swap(arr[i], arr[correctIdx]);
    }
    for (int e : arr)
    {
        cout << e << " ";
    }
    return 0;
}