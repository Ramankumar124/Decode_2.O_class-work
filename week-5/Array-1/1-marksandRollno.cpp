/*Ques: Given an array of marks of students, if the
marlqof any student is less than 35 print its roll
number. [roll number here refers to the index of the
array.]*/

#include <iostream>
using namespace std;

int main()
{
      int marks[5]={12,36,56,78,13};
    for (int i = 0; i < 5; i++)
    {
        if(marks[i]<35)
        cout<< i + 1<<endl;
    }
   
    return 0;
}