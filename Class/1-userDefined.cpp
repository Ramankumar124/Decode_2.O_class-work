#include<iostream>
using namespace std;

int main(){
   
   class student{
    public:
    int rollno;
    string name;
    float gpa;
   };
  student s1;//method 1 of initilization
s1.gpa=8.6;
s1.name="Raman";
s1.rollno=7.5;
cout<<s1.gpa<<" "<<s1.name<<" "<<s1.rollno<<endl;


student s2={56,"Raman",5.8};//method 2
cout<<s2.gpa<<" "<<s2.name<<" "<<s2.rollno;
    return 0;
}