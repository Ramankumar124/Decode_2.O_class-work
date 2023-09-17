// Ques : Count the number of elements in given array
// greater than a given number x.
#include<iostream>
using namespace std;

int main(){
 int  i;

 int n;
 cout<<"Enter value of n \n";
 cin>>n;
    int size;
    cout << "Enter the size of array :";
    cin >> size;


    cout << "Enter Elements of Array\n";
    int arr[size];
    for (i = 0; i <= size - 1; i++)
    {
        cin >> arr[i];
    }
    cout << " YOur Elemens are";
    for (i = 0; i <= size - 1; i++)
    {
        cout<< arr[i] << " ";
    }

    int count=0;
for(i=0;i<=size-1;i++){
    if(arr[i]>n){
        count++;
    }
}
cout<<"\nYOur count is "<<count;

return 0;
}