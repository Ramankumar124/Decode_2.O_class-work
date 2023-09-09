
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n \n";
    cin >> n;
    int i, j,a;
    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         if (i % 2 != 0)
    //         {
    //             if (j % 2 != 0)
    //             {
    //                 cout << "1 ";
    //             }
    //             else
    //                 cout << "0 ";
    //         }
    //         else{
    //               if (j % 2 != 0)
    //             {
    //                 cout << "0 ";
    //             }
    //             else
    //                 cout << "1 ";
    //         }
    //     }
    //     cout << "\n";
    // }    
    // or

    //    for(i=1;i<=n;i++){
    //     if(i%2!=0) a=1;
    //     else a=0;
    //     for(j=1;j<=i;j++){
    //         cout<<a;
    //         //flipping
    //         if(a==1) a=0;
    //         else a=1;
    //     }
    //     cout<<endl;

    //    }
// or 
      for (i = 1; i <=n; i++)
    {
        for (j = 1; j <= i; j++)
        {
           if(i==j || ((i+j)%2==0))//modulas of two odd number divide by 2 is zero
            cout<<"1 ";
            else {cout<<"0 ";}
        }  
        cout << "\n";
    }
    
    return 0;
}

