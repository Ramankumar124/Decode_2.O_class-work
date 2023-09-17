#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=4;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    return;
}
void change(int b[]){
    
    b[0]=100;
    return ;
}
int main(){
 int arr[5]={1,2,3,4,5};

 display(arr);//displaying the value of array
 change(arr);// to change the value of array without using Pointer
 display(arr);
    return 0;
}

// hence function mai hum value nhi bhejte addres bhejte hai


// and we can't use sizeOf opertor becouse in function argument.argument act
//as a pointer  