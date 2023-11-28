#include<iostream>
using namespace std;


class car{
    public:
    int price;
    string name;
    car(){}
    car(int daam,string naam){
        price=daam;
        name=naam;
    }

    //this will not work becouse same name as variable
    //     car(int price,string name){
    //     price=price;
    //     name=name;
    // }

  //ye kam karega
        car(int price,string name){
      this->  price=price;//or (*this).price
      this->  name=name;
    }


};

int main(){
car c1=car{12000,"kia sonet"};
cout<<c1.name<<" "<<c1.price;
    return 0;
}