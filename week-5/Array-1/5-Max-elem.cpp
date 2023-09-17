/*Ques : Find the maximum value out of all the elements
in the array.*/
#include<iostream>
using namespace std;

int main(){
 int n, i;

int pos;
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
        cout<< arr[i] << " " << endl;
    }

int max=0;

for(i=0;i<=size-1;i++){
    if(arr[i]>max){
        max=arr[i];
        pos=i;
    }
}
  cout<<"max element is "<<max<<" which is placed in postion "<<pos+1;
    return 0;
}