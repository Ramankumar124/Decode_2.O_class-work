#include<iostream>
using namespace std;

class bike{

private:
    int speed;
    int power;

   public:
   // construs the inital value of class
   bike(int topSpeed,int torque){
    this->speed=topSpeed;
    this->power=torque;
    cout<<"constructor called";
   }
       int getSpeed() {
        return speed;
    }

    int getPower() {
        return power;
    }
};



int main(){

bike ktm(450,25); 
cout<<ktm.getSpeed()<<endl; 
    return 0;
}