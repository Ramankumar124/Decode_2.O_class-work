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
    cout<<"constructor called"<<endl;
   }
       int getSpeed() {
        return speed;
    }

    int getPower() {
        return power;
    }
    // destructor 

    ~bike(){
        cout<<"disctuctor ki bari"<<endl;
    }
    //we makd 2 constr so  2 distrctr will execute
  
};



int main(){

bike ktm(450,25);
bike bmw(234,12); 
cout<<ktm.getSpeed()<<endl; 
cout<<bmw.getSpeed()<<endl; 
    return 0;
}