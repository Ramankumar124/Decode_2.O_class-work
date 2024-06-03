#include<iostream>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int arr[5];
    // int size;
    Queue{
        f=0;
        b=0;
    }
    void push(int val){
        if(b==5) cout<<" Queue is full";
        arr[b]=val;
        b++;
    }
    
       void pop(){
        if(f==0) cout<<" queue is khali";
        arr[b]=val;
        b++;
    }
    
}
void push(int val){

}

int main(){

int arr[]={10,20,30};


    return 0;
}