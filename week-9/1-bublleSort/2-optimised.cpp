#include<iostream>
using namespace std;

int main(){
    int arr[6]={4,6,5,1,3,2};
int n=6;
cout<<"array before sorting \n";
for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
    }
cout<<endl;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for (int j = 0 ;j < n -1-i; j++) {// n -1-i decrese the time complexity
          if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=false;
          }
    }
    if(flag==true) break;
    }
    cout<<"array after sorting \n";
    for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
    }

    return 0;
}