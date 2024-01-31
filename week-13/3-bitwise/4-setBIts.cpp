//Find the number of set bits for any integer n.
//(sets bit are no of ones in binary no)
// we will use builtin_popcound function

/*
#include<iostream>
using namespace std;

int count_Set_bits(int n){
    return __builtin_popcount(n);
}
int main(){
// 13 :) 1101
cout<<count_Set_bits(13);
    return 0;
}

*/

// by using logic

/* 22-> 10110
   21->10101 

   22 ki last set bit (3 idx) se 21 mai change hoga
   
*/
#include<iostream>
using namespace std;

int count_Set_bits(int n){
    int count=0;
    while(n>0){
        n=(n&(n-1));// every iteration will remove one set bit
        count++;
    }
    return count;
}
int main(){

// 13 :) 1101
cout<<count_Set_bits(13);
   
    return 0;
}