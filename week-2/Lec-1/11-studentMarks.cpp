/*Ques : Take input percentage of a student and
print the Grade according to marks:
1) 91-100 Excellent
2) 81-90 very Good
3) 71-80 Good
4)@70 Can do better
5) 51-60 Average
6) 40-50 Below Average
7) Fail*/

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter Marks:";
    cin >> marks;
   
   if(marks>=91 && marks<=100){
    cout<<"A++";
   }
   else if(marks>81){
    cout<<"A+";
   }
   else if(marks>71){
    cout<<"A";
   }
   else if(marks>61){
    cout<<"B";
   }
   else if(marks>51){
    cout<<"C";
   }
   else if(marks>41){
    cout<<"D";
   }
   else {
    cout<<"you are fail";}

    return 0;
}