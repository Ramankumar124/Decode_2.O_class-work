#include<iostream>
using namespace std;
   class student{
    public:
    int rollno;
    string name;
    float gpa;
   };

void print(student s){
    cout<<s.name<<" "<<s.rollno<<" "<<s.gpa;
    cout<<endl;
}
int main(){
   

  student s1;//method 1 of initilization
s1.gpa=8.6;
s1.name="Raman";
s1.rollno=7.5;
print(s1);


student s2={56,"Raman",5.8};//method 2
print(s2);
    return 0;
}