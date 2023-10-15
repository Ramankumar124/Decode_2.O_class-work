/*Ques : Given an array with N distinct elements,
convert the given array to a form where all
elements are in the range from O to N-1. The order
of elements is the same, i.e., O is placed in the
place of the smallest element, 1 is placed for the
second smallest element, ... N-1 is placed for the
largest element.*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
// if we have negative elements
//  int main(){

// int arr[5]={19,12,23,8,16};
// int n=5;
// int x=0;
// vector<int> v(n,0);
// for(int i=0;i<n;i++){
//     int min=INT_MAX;
//     int mindx=-1;
//     for(int j=0;j<n;j++){
//         if(v[j]==1) continue;
//         else{
//             if(arr[j]<min){
//                 min=arr[j];
//                 mindx=j;
//                 }
//         }
//     }
//     arr[mindx]=x;
//     x++;
//     v[mindx]=1;
// }
// for(int ele :arr) cout<<ele<<" ";
//     return 0;
// }

// if we have only positive number

int main()
{
    int arr[5] = {19, 12, 23, 8, 16};
    int n = 5;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] <= 0)
                continue;
            else if (arr[j] < min)
            {
                min = arr[j];
                mindx = j;
            }
        }
        arr[mindx] = -x;
        x++;
    }
    for (int ele : arr)
        cout << -ele << " ";
    return 0;
}
