/*Ques : Find the second largest  value out of all the elements
in the array.*/
#include<iostream>
using namespace std;

int main(){
 int n, i;


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

int max=INT16_MIN;
 int Smax=INT16_MIN;

for(i=0;i<=size-1;i++){
    if(arr[i]>max){
        max=arr[i];
     
    }
}
for(i=0;i<=size-1;i++){
    if(Smax<arr[i] && arr[i]!=max){
        Smax=arr[i];
     
    }
}
  cout<<"max element is "<<max;
  cout<<" second max element is "<<Smax;
}