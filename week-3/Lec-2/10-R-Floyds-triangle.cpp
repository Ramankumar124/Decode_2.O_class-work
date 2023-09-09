    
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n \n";
    cin >> n;
    int i, j;
   int a=1;
    for (i = 1; i <=n; i++)
    {   
        for (j = 1; j <= i; j++)
        {
            cout <<a<< " ";
      a=a+1;
          
        }
        cout << "\n";
        
    }
    
    return 0;
}
