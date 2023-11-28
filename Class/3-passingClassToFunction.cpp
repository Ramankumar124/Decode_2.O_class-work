#include<iostream>
#include<string>
using namespace std;


class car{
    public:
    int price;
    string name;
};

void change(car& x){//by refrence method 1
    x.name="Hirohonda";
    x.price=6000;
}

void change1(car* x){
//(*x).name="ferari";
//(*x).price=10;
//or
x->name="ferari";
x->price=10;

}
int main(){

car c1={1200,"kia sonet"};
cout<<c1.name<<" "<<c1.price<<endl;
// change(c1);
change1(&c1);

cout<<c1.name<<" "<<c1.price<<endl;
    return 0;
}