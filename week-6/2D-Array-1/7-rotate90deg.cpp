//write a program to rotate array int0 90 degree clockwise
//leetcode 48;

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
for(i=2;i>=0;i--){
    for(j=2;j>=0;j--){
        swap(arr[i][j],arr[i][j]);
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