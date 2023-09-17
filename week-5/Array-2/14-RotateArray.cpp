/*Ques : Rotate the given array 'a' by k steps, where k is
non-negative.
Note : k can be greater than n as well where n is the
size of array 'a'.*/

#include <iostream>
#include <vector>
using namespace std;

void reverse(int i, int j, vector<int> &v)
{

    while (j >= i)
    {

        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return;
}
int main()
{  

    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);


    cout << "Original Array: ";
    display(v);

    cout << endl;

int k;
    cout << "Enter value of k";
    cin>>k;
    if(k>n) k=k-n;//becouse iske bina agr hum k=9 dalenge to problem ayegi 
    int n = v.size();
    reverse(0, n - 1 - k, v);
    reverse(n - k, n - 1, v);
    reverse(0, n - 1, v);
    
    display(v);

    return 0;
}