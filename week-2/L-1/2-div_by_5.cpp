/*Ques : Take positive integer input and tell if it
is divisible by 5 or not.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 5 == 0)
    {
        cout << "\nThe given number is divisible by five.";
    }

  else{
    cout<<"sorry but your number is not divisive be 5";
    
  } 
    return 0;
}