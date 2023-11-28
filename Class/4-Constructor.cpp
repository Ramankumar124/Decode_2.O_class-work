#include<iostream>
using namespace std;

int main(){
   
   class student{
    public:
    int rollno;
    string name;
    float gpa;

student(){//default constructor

}
    student(string x,int y,float z){
        gpa=z;
        rollno=y;
        name=x;
    }
   };
//constructor is use when we need to declare at any order
student s1={}
student s2= student("kumar",57,9.2);// 3rd initilzation 
cout<<s2.gpa<<" "<<s2.name<<" "<<s2.rollno;


    return 0;
}