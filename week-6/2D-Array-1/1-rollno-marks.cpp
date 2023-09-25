/*Ques : Write a program to store roll number and
marks obtained by 4 students side by side in a
matrix*/


#include<iostream>
using namespace std;

int main(){

int student[2][4];
    cout<<"Enter roll no and marks  ";
for(int i=0;i<2;i++){
    for(int j =0;j<4;j++){
        
        cin>>student[i][j];
    }
}

for(int i=0;i<4;i++){
    for(int j =0;j<2;j++){
        
        cout<<student[i][j]<<"   ";
    }
    cout<<endl;
    }

    return 0;
}