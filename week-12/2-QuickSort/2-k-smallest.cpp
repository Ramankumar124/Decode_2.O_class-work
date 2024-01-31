/*Ques : Write a Program to find Kth smallest
element in an array using QuickSort.*/

// quick select algo


#include<iostream>
using namespace std;
// this function will do two things
// 1) set pivot in right postion 
// 2) sort left rigt on pivot elememt
int partition(int arr[],int si,int ei){
    int pivotEle=arr[si];
    // int pivotEle=arr[(si+ei)/2] ; solve worst case scenerio
    int count =0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotEle) count++;
    }
    int pivotIdx=count+si;
    swap(arr[si],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<pivotEle) i++;
        if(arr[j]>pivotEle) j--;
        else if(arr[i]>pivotEle && arr[j]<=pivotEle){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
   return pivotIdx;
}
    

int quicksort(int arr[],int si,int  ei,int k){
  
    int pivotIdx =partition(arr,si,ei);
    if(pivotIdx+1==k) return arr[pivotIdx];
    else if(pivotIdx+1 < k) return   quicksort(arr,pivotIdx+1,ei,k);
    else  return quicksort(arr,si,pivotIdx-1,k);
}

int main(){

int arr[]={5,1,8,-2,7,6,3,4,0};
int n=sizeof(arr)/sizeof(arr[0]);
for(int e :arr){
cout<<e<<" ";
}
cout<<endl;

int k=3;
cout<<quicksort(arr,0,n-1,k);//arr ,starting idx,ending idx

    return 0;
}