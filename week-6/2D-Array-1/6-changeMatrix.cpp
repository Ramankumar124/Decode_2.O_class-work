/*Ques : Write a program to change the given matrix
with its transpose.
[Leetcode 867]*/

#include<iostream>
using namespace std;

int main(){
int i,j;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
for(i=0;i<3;i++){
    for( j =0;j<3;j++){
        
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

for( i=0;i<3;i++){
    for(j =i+1;j<3;j++){
       
            swap(arr[i][j],arr[j][i]);
        
    }

}
cout<<"\n\n\n";
for( i=0;i<3;i++){
    for( j =0;j<3;j++){
        
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


    return 0;
}