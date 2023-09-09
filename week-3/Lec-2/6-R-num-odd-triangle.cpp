
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n \n";
    cin >> n;
    int i, j;
    

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= 2 * i - 1; j += 2)
    //     {

    //         cout << j << " ";
    //     }
    //     cout << "\n";
    // }

    //Or
      for(i=1;i<=n;i++){
       int a=1;
        for(j=1;j<=i;j++){
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }

    return 0;
}
