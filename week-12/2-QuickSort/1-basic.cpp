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
    

void quicksort(int arr[],int si,int  ei){
    if(si>=ei) return;
    int pivotIdx =partition(arr,si,ei);
    quicksort(arr,si,pivotIdx-1);
    quicksort(arr,pivotIdx+1,ei);
}

int main(){

int arr[]={5,1,8,2,7,6,3,4};
int n=sizeof(arr)/sizeof(arr[0]);
for(int e :arr){
cout<<e<<" ";
}
cout<<endl;
quicksort(arr,0,n-1);//arr ,starting idx,ending idx
for(int e :arr){
cout<<e<<" ";
}
    return 0;
}