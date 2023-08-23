/*Ques : Write a program to input week number(l-7)
and print day of week name using switch case.*/


#include<iostream>
using namespace std;

int main(){
  int weekno;
  cout<<"Enter week NUmber";
  cin>>weekno;

  switch (weekno)
  {
    case 1:
       cout<<"Monday";
       break;
        case 2:
       cout<<"Tuesday";
       break;
        case 3:
       cout<<"Wednesday";
       break;
        case 4:
       cout<<"Thursday";
       break;
        case 5:
       cout<<"Friday";
       break;
        case 6:
       cout<<"Saturday";
       break;
        case 7:
       cout<<"Sunday";
       break;
      default :
      cout<< "Invalid Week Number ";
  }
    return 0;
}